#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    if (num < 1 || num > 10)
    {
        std::cout << "Invalid n!";
        return 0;
    }

    for (int n = 0; n < num; n++)
    {
        // int binomial = 1;
        for (int k = 0; k <= n; k++)
        {
            // More efficient way by reusing the last binomial coeficient (efficient but not intuitive)
            // if (k == 0 || n == 0)
            // {
            //     binomial = 1;
            // }
            // else
            // {
            //     binomial = binomial * (n - k + 1) / k;
            // }
            // std::cout << binomial;

            // Using Pascal's Triangle rule (inefficient)
            unsigned long long nFactoriel = 1, kFactoriel = 1, nMinusKFactoriel = 1;
            for (int i = 1; i <= n; i++) 
            {
                nFactoriel *= i;
            }
            for (int i = 1; i <= k; i++) 
            {
                kFactoriel *= i;
            }
            for (int i = 1; i <= n - k; i++) 
            {
                nMinusKFactoriel *= i;
            }

            std::cout << nFactoriel / (kFactoriel * nMinusKFactoriel);
            if (n != k)
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}