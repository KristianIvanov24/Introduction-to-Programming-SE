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

    int min, max;
    std::cin >> min;
    max = min;

    for (int i = 1; i < n; i++)
    {
        int current;
        std::cin >> current;

        if (current < min)
        {
            min = current;
        }

        if (current > max)
        {
            max = current;
        }
    }

    std::cout << "Largest number is: " << max << std::endl;
    std::cout << "Smallest number is: " << min << std::endl;
}