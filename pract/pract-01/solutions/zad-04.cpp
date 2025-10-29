#include <iostream>

int main()
{
    char symb;
    std::cout << "Enter a symbol: ";
    std::cin >> symb;

    bool isVowel =
        (symb == 'A') || (symb == 'E') || (symb == 'I') || (symb == 'O') || (symb == 'U') ||
        (symb == 'a') || (symb == 'e') || (symb == 'i') || (symb == 'o') || (symb == 'u');

    std::cout << isVowel;
}
