#include <iostream>

int main () {
    int n;
    std::cin >> n;

    if (n % 2 == 0) 
        std::cout << "Invalid input" << std::endl;

    int spaces = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < spaces || j >= n - spaces)
                std::cout << " ";
            else
                std::cout << "*";
        }

        spaces = (i > n / 2 - 1 ? spaces - 1 : spaces + 1);
        std::cout << std::endl
                  << std::endl;
    }

    return 0;
}
