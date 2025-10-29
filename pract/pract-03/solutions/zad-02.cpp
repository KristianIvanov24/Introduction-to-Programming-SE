#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    if (num % 3 == 0) {
        std::cout << "FIZZ";
    }
    
    if (num % 5 == 0) {
        std::cout << "BUZ";
    }

    return 0;
}