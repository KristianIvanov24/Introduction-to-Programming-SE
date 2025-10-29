#include <iostream>

int main()
{
    double num1, num2;
    char operation;
    std::cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case '+':
        std::cout << num1 + num2;
        break;
    case '-':
        std::cout << num1 - num2;
        break;
    case '*':
        std::cout << num1 * num2;
        break;
    case '/':
        std::cout << num1 / num2;
        break;
    default:
        std::cout << "Invalid operation";
    }

    return 0;
}