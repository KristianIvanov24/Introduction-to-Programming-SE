#include <iostream>

/*
Задача 3: Напишете функция, която приема естествено число и връща дали цифрите му са сортирани (във възходящ или в низходящ ред).

Вход: 122239, Изход: true
*/

bool areDigitsSorted(int n)
{
	bool isAscending = true;
	bool isDescending = true;

	int prevDigit = n % 10;
	n /= 10;
	
	while (n != 0)
	{
		int currDigit = n % 10;

		if (currDigit > prevDigit)
		{
			isDescending = false;
		}

		if (currDigit < prevDigit)
		{
			isAscending = false;
		}

		prevDigit = currDigit;
		n /= 10;
	}

	return isAscending || isDescending;
}

int main()
{
	std::cout << (areDigitsSorted(122239) ? "true" : "false");
	return 0;
}
