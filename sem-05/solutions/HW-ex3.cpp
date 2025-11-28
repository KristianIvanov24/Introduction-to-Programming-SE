#include <iostream>

/*
Задача 3 : Въвежда се число N (N <= 1000) и N цели числа (елементи на масив).
Да се намери и изведе броят на тези от числата, чийто сбор от цифрите е двуцифрено число.

Вход: 5 26 87 -57 238 125 Изход: 3

Вход: 4 23 81 -53 231, Изход: 0
*/

const int FIRST_TWO_DIGIT_NUMBER = 10;

unsigned getDigitsSum(unsigned number)
{
	unsigned sum = 0;

	while (number != 0)
	{
		sum += number % 10;
		number /= 10;
	}

	return sum;
}

int absoluteValue(int number)
{
	return number > 0 ? number : -number;
}

unsigned countNumbersWithTwoDigitSum(const int arr[], size_t size)
{
	unsigned count = 0;
	for (size_t i = 0; i < size; ++i)
	{
		if (getDigitsSum(absoluteValue(arr[i])) >= FIRST_TWO_DIGIT_NUMBER)
			count++;
	}

	return count;
}

int main()
{
	const size_t SIZE = 6;
	int arr[] = { 4, 23, 81, -53, 231, 1 };
	std::cout << countNumbersWithTwoDigitSum(arr, SIZE);
	return 0;
}