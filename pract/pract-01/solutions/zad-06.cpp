#include <iostream>

int main()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	int secondDigit = num % 10;
	num /= 10;
	int firstDigit = num % 10;
	
	int productOfDigits = firstDigit * secondDigit;
	std::cout << productOfDigits;
}
