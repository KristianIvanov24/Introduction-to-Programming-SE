#include <iostream>

/*
Задача 5: Напишете функция, която приема естествено число и връща ново число, което има същите цифри, но в сортиран вид.

Вход: 531261, Изход: 112356
*/

int countDigitOccurences(int n, int digit)
{
	int count = 0;
	while (n != 0)
	{
		if (n % 10 == digit)
			count++;

		n /= 10;
	}

	return count;
}

int concatDigitAtBack(int number, int digit)
{
	return digit > 9 ? 0 : number * 10 + digit;
}

int concatMultipleTimesAtBack(int number, int digit, int howManyTimes)
{
	for (int i = 0; i < howManyTimes; i++)
	{
		number = concatDigitAtBack(number, digit);
	}

	return number;
}

int sortDigits(int n)
{
	int result = 0;

	for (int i = 1; i <= 9; i++)
	{
		int currentNumberOccurences = countDigitOccurences(n, i);
		result = concatMultipleTimesAtBack(result, i, currentNumberOccurences);
	}

	return result;
}

int main()
{
	std::cout << sortDigits(531261);
	return 0;
}
