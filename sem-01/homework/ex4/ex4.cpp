#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    bool isValid = (num >= 2 && num <= 6);

	std::cout << isValid << std::endl;

    return 0;
}