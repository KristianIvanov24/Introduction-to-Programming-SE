#include <iostream>

int main()
{
    char lowerSymb;
    std::cout << "Enter a lowercase symbol: ";
    std::cin >> lowerSymb;

    char upperSymb = lowerSymb - 'a' + 'A';

    std::cout << upperSymb;
}

