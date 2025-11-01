#include <iostream>

int main () {
    int n;
    std::cin >> n;

    int length = 3 * n - 2;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < length; j++)
            {
                if (j < n || length - j <= n)
                    std::cout << ". ";
                else
                    std::cout << "  ";
            }
        }
        else if (n % 2 == 0 && (i + 1 == n / 2 || i == n / 2) || n % 2 && i == n / 2)
        {
            for (int j = 0; j < length; j++)
            {
                if (j == 0 || j == length - 1 || (j >= n - 1 && length - j >= n))
                    std::cout << ". ";
                else
                    std::cout << "  ";
            }
        }
        else
        {
            for (int j = 0; j < length; j++)
            {
                if (j == 0 || j == n - 1 || j == 2 * n - 2 || j == length - 1)
                    std::cout << ". ";
                else
                    std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}