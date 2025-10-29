#include <iostream>

int main()
{
	int num;
	std::cout << "Enter a num: ";
	std::cin >> num;

	int fourthDigit = num % 10;
	num /= 10;

	int thirdDigit = num % 10;
	num /= 10;

	int secondDigit = num % 10;
	num /= 10;

	int firstDigit = num % 10;

	std::cout << fourthDigit << thirdDigit << secondDigit << firstDigit;
}
