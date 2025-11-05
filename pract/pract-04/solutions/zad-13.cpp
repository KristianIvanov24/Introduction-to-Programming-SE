#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Invalid n!";
        return 0;
    }

    if (n <= 2)
    {
        std::cout << "1";
        return 0;
    }

    if (n == 3)
    {
        std::cout << "2";
        return 0;
    }

    int numberWidth = (n >= 10) ? 3 : 2;

    for (size_t i = 1; i <= n - 2; i++)
    {
        int spaces = (n - 2 - i) * numberWidth;

        while (spaces--)
        {
            std::cout << " ";
        }

        for (int j = n - 1; j > n - i; j--)
        {
            if (j < 10 && n >= 10)
            {
                std::cout << " ";
            }
            std::cout << j << " ";
        }

        for (int j = n - i; j < n; j++)
        {
            if (j < 10 && n >= 10)
            {
                std::cout << " ";
            }
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }

    for (int i = n - 3; i >= 1; i--)
    {
        int spaces = (n - 2 - i) * 2;

        while (spaces--)
        {
            std::cout << " ";
        }

        for (int j = n - 1; j > n - i; j--)
        {
            if (j < 10 && n >= 10)
            {
                std::cout << " ";
            }
            std::cout << j << " ";
        }

        for (int j = n - i; j < n; j++)
        {
            if (j < 10 && n >= 10)
            {
                std::cout << " ";
            }
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}