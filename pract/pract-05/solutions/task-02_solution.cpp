#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    if (x == 1 || x == 2)
    {
        std::cout << "Low ";
    }
    else
    {
        if (x == 3)
            std::cout << "Mid ";
        if (x == 3 || x == 4)
            std::cout << "High ";
        if (x > 0)
            std::cout << "Positive";
        else
            std::cout << "Other";
    }
}