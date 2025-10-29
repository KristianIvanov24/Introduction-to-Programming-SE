#include <iostream>

int main()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	int lastDigit = num % 10;
	std::cout << lastDigit;
}
