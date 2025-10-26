#include <iostream>

int main () {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int firstNumber = n * i + 1, lastNumber = (i + 1) * n;
        if (i % 2)
        {
            for (int j = lastNumber; j >= firstNumber; j--)
                std::cout << j << " ";
        }
        else
        {
            for (int j = firstNumber; j <= lastNumber; j++)
                std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}