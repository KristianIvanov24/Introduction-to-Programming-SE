#include <iostream>

int main()
{
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	int thirdDigit = num % 10;
	num /= 10;
	int secondDigit = num % 10;
	num /= 10;
	int firstDigit = num % 10;

	int sum = thirdDigit + secondDigit + firstDigit;
	std::cout << sum;
}
