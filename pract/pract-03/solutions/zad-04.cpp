#include <iostream>

const int UPPER_LOWER_DIFF = 'a' - 'A';

int main()
{
    char letter;
    std::cin >> letter;

    bool isUpper = letter >= 'A' && letter <= 'Z';
    bool isLower = letter >= 'a' && letter <= 'z';

    if (isUpper)
    {
        std::cout << (letter += UPPER_LOWER_DIFF);
    }
    else if (isLower)
    {
        std::cout << letter - UPPER_LOWER_DIFF;
    }
    else
    {
        std::cout << "Not a letter";
    }

    if (isUpper || isLower)
    {
        bool isVowel = letter == 'a' || letter == 'o' || letter == 'u' || letter == 'e' || letter == 'i';
        std::cout << (isVowel ? "Vowel" : "Consonant");
    }

    return 0;
}