#include <iostream>

int main()
{
    int digit;
    std::cin >> digit;

    switch (digit)
    {
    case 0:
        std::cout << 'O';
        break;
    case 3:
        std::cout << 'I';
    case 2:
        std::cout << 'I';
    case 1:
        std::cout << 'I';
        break;
    case 4:
        std::cout << 'I';
    case 5:
        std::cout << "V";
        break;
    case 6:
        std::cout << "VI";
        break;
    case 7:
        std::cout << "VII";
        break;
    case 8:
        std::cout << "VIII";
        break;
    case 9:
        std::cout << "IX";
        break;
    default:
        std::cout << "Invalid number given. Numbers must be in range [0-9]!";
    }

    return 0;
}