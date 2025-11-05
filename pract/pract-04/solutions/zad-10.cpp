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

    unsigned long long oddSum = 0;
    unsigned long long evenSum = 0;

    for (int i = 0; i < n; i++)
    {
        int current;
        std::cin >> current;

        if (i % 2 == 0)
        {
            evenSum += current;
        }
        else
        {
            oddSum += current;
        }
    }

    std::cout << "Sum of even: " << evenSum << std::endl;
    std::cout << "Sum of odd: " << oddSum << std::endl;
    std::cout << evenSum << (evenSum == oddSum ? " == " : " != ") << oddSum << std::endl;
}