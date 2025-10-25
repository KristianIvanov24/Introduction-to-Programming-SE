#include <iostream>

int main()
{
    char letter;
    std::cin >> letter;
	
    if (letter >= 'a' && letter <= 'z')
    {
        std::cout << char(letter - ('a' - 'A')) << std::endl;
        switch (letter)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                std::cout << "Vowel" << std::endl;
                break;
            default:
                std::cout << "Consonant" << std::endl;
                break;
		}
    }
    else if (letter >= 'A' && letter <= 'Z')
    {
        std::cout << char(letter + ('a' - 'A')) << std::endl;
        switch (letter)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            std::cout << "Vowel" << std::endl;
            break;
        default:
            std::cout << "Consonant" << std::endl;
            break;
        }
    }
    else
    {
        std::cout << "Invalid input" << std::endl;
    }
	return 0;
}

