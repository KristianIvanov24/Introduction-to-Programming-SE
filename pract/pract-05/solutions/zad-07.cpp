#include <iostream>

int abs(int n)
{
    return n > 0 ? n : -n;
}

int countDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    n = abs(n);
    int count = 0;

    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

int pow(int base, int exp)
{
    int result = 1;

    for (int i = 0; i < exp; i++)
        result *= base;

    return result;
}

bool isArmstrong(int n)
{
    n = abs(n);
    int sum = 0;
    int copy = n;
    int digits = countDigits(n);

    while (copy > 0)
    {
        sum += pow(copy % 10, digits);
        copy /= 10;
    }

    return n == sum;
}

int main()
{
    std::cout << isArmstrong(153) << std::endl;
    std::cout << isArmstrong(370) << std::endl;
    std::cout << isArmstrong(90) << std::endl;
}