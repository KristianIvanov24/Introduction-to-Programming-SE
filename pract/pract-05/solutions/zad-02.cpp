#include <iostream>

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

int main()
{
    for (int i = -9; i <= 9; i++)
    {
        std::cout << countDigits(i) << " ";
    }
    
    std::cout << std::endl;

    for (int i = -99; i <= -10; i++)
    {
        std::cout << countDigits(i) << " ";
    }

    std::cout << std::endl;

    for (int i = 100; i <= 999; i++)
    {
        std::cout << countDigits(i) << " ";
    }
    std::cout << std::endl;
}