#include <iostream>

int main()
{
    char lowerSymb;
    std::cout << "Enter a lowercase symbol: ";
    std::cin >> lowerSymb;

    int pos = lowerSymb - 'a' + 1;
    std::cout << pos;
}
