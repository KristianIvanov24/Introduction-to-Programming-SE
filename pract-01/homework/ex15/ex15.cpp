#include <iostream>

int main()
{
    int num;
	std::cin >> num;

	int thousands = num / 1000;
	int hundreds = (num % 1000) / 100;
	int tens = (num % 100) / 10;
	int ones = num % 10;

	bool isPalindrome = (thousands == ones) && (hundreds == tens);

	std::cout << isPalindrome << std::endl;
	
	return 0;
}