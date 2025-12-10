#include <iostream>

char digitToChar(int digit)
{
    return digit + '0';
}

size_t getDigitsCount(int num)
{
    if (num == 0)
    {
        return 1;
    }

    size_t count = 0;

    while (num)
    {
        count++;
        num /= 10;
    }

    return count;
}

size_t myStrlen(const char* str)
{
    size_t count = 0;

    while (*str)
    {
        count++;
        str++;
    }

    return count;
}

void swap(char& a, char& b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}

// more robust alternative to reverseString
void reverseString(char* str, size_t start, size_t end)
{
    if (start >= end)
    {
        return;
    }

    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

void reverseString(char* str, size_t len)
{
    size_t end = len / 2;
    for (size_t i = 0; i < end; i++)
    {
        swap(str[i], str[len - i - 1]);
    }
}

void toString(int num, char* str)
{
    bool isNeg = false;

    if (num < 0)
    {
        num *= -1;
        isNeg = true;
    }

    size_t len = getDigitsCount(num);

    for (size_t i = 0; i < len; i++)
    {
        str[i] = digitToChar(num % 10);
        num /= 10;
    }

    if (isNeg)
    {
        str[len++] = '-';
    }
    str[len] = '\0';

    reverseString(str, len);
}

int main()
{
    char str[1024] = {};
    int num = -2;

    toString(num, str);

    std::cout << str;
}