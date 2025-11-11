#include <iostream>

int hasSameDigits(int number)
{
    int digit = number % 10;
    number /= 10;

    while (number)
    {
        int current = number % 10;
        if (digit != current)
        {
            return false;
        }

        number /= 10;
    }

    return true;
}

int main()
{
    std::cout << hasSameDigits(0) << " ";
    std::cout << hasSameDigits(11) << " ";
    std::cout << hasSameDigits(110) << " ";
    std::cout << hasSameDigits(12321) << " ";
    std::cout << hasSameDigits(3333) << " ";
}