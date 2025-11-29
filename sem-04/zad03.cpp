#include <iostream>
//Напишете функция, която приема естествено число и връща дали цифрите му са сортирани (във възходящ или в низходящ ред).
bool areAscSorted(int number)
{
	int digit, prevDigit;
	do
	{
		prevDigit = number % 10;
		number /= 10;
		digit = number % 10;
		if (digit > prevDigit)
			return false;
	} while (number > 0);
	return true;
}
bool areDescSorted(int number)
{
	int digit, prevDigit;
	do
	{
		prevDigit = number % 10;
		number /= 10;
		digit = number % 10;
		if (digit < prevDigit)
			return false;
	} while (number > 10);
	return true;
}
bool areDigitsSorted(int number) 
{
	return areAscSorted(number) || areDescSorted(number);
}
int main()
{
	int num;
	std::cout << "Input number: ";
	std::cin >> num;
	std::cout << areDigitsSorted(num);
}
