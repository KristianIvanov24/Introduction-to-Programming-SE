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
	
	int palindrome = firstDigit + secondDigit * 10 + thirdDigit * 100;
	std::cout << palindrome;
}
