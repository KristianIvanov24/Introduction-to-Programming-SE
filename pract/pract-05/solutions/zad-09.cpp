#include <iostream>

const int MIN_POS = 1;

int countDigits(long long num)
{
    int count = 0;

    do
    {
        count++;
        num /= 10;
    } while (num);

    return count;
}

int getDigitByPosition(int num, int pos)
{
    int count = countDigits(num);

    if (pos < MIN_POS || pos > count)
    {
        return -1;
    }

    int posRTL = count - pos;
    while (posRTL--)
    {
        num /= 10;
    }

    return num % 10;
}

int main()
{
    std::cout << getDigitByPosition(0, 1) << " ";
    std::cout << getDigitByPosition(0, 2) << " ";
    std::cout << getDigitByPosition(0, -1) << " ";
    std::cout << getDigitByPosition(0, 0) << " ";
    std::cout << getDigitByPosition(1234567, 3) << " ";
    std::cout << getDigitByPosition(110, 3) << " ";
    std::cout << getDigitByPosition(12321, 1) << " ";
}