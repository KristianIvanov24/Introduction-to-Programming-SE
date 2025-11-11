#include <iostream>

bool isDigit(char symb)
{
    return symb >= '0' && symb <= '9';
}

int digitAsCharToInt(char digit)
{
    if (!isDigit(digit))
    {
        return -1;
    }

    return digit - '0';
}

int main()
{
    for (char i = '0'; i <= '9'; i++)
    {
        std::cout << digitAsCharToInt(i) << " ";
    }

    std::cout << std::endl;

    for (char i = 'a'; i <= 'z'; i++)
    {
        std::cout << digitAsCharToInt(i) << " ";
    }
}