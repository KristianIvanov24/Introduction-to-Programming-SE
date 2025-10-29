#include <iostream>

int main()
{
    int speed;
    std::cin >> speed;

    if (speed < 0)
    {
        std::cout << "Invalid speed";
    }
    else if (speed <= 10)
    {
        std::cout << "slow";
    }
    else if (speed <= 50)
    {
        std::cout << "average";
    }
    else if (speed <= 150)
    {
        std::cout << "fast";
    }
    else if (speed <= 1000)
    {
        std::cout << "ultra fast";
    }
    else
    {
        std::cout << "extremely fast";
    }

    return 0;
}