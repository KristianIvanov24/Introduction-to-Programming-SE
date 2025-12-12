#include <iostream>
bool areAllDigitsEqual(int number)
{
	number = number < 0 ? -number : number;
	short digit = number % 10;
	while (number > 0)
	{
		if (digit != number % 10)
			return false;
		number /= 10;
	}
	return true;
}
int main()
{
	//Напишете функция, която приема естествено число и връща дали цифрите му са еднакви.
	int number;
	std::cout << "Input number: ";
	std::cin >> number;
	std::cout << areAllDigitsEqual(number);
}
