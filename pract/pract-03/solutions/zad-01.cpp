#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    if (num < 0)
    {
        std::cout << num << " is negative";
    }
    else if (num > 0)
    {
        std::cout << num << " is positive";
    }
    else
    {
        std::cout << "Number is zero";
    }

    return 0;
}