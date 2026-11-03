#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    switch (x)
    {
        case 3:
        case 6:
            std::cout << "group";
            break;
        case 9:
            std::cout << 9;
            break;
        default:
            std::cout << "none";
    }
}
