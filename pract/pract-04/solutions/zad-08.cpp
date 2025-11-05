#include <cmath>
#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    bool hasSumOfPrimes = false;

    int end = num / 2;
    for (int i = 2; i <= end; i++)
    {
        int k = num - i;
        bool arePrime = true;

        int iSqrt = std::sqrt(i);
        for (int j = 2; j <= iSqrt; j++)
        {
            if (i % j == 0)
            {
                arePrime = false;
                break;
            }
        }

        int kSqrt = std::sqrt(k);
        for (int j = 2; j <= kSqrt; j++)
        {
            if (k % j == 0)
            {
                arePrime = false;
                break;
            }
        }

        if (arePrime)
        {
            std::cout << i << " + " << k << " = " << num << std::endl;
            hasSumOfPrimes = true;
        }
    }

    if (!hasSumOfPrimes)
    {
        std::cout << num << " is not a sum of any two prime numbers" << std::endl;
    }

    return 0;
}