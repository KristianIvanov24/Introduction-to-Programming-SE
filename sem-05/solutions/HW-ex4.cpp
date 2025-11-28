#include <iostream>
#include <cmath>

/*
Задача 4 : Въвежда се число N (N <= 1000) и N цели числа (елементи на масив).
Да се намерят и изведат числата, които са прости в редицата.

Вход: 6 4 5 43 12 15 7 Изход: 5 43 7
*/

bool isPrimeNumber(int number)
{
	if (number <= 1)
		return false;

	double end = sqrt(number);

	for (int i = 2; i <= end; i++)
	{
		if (number % i == 0)
			return false;
	}

	return true;
}

void printArrayPrimeNumbers(const int arr[], size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		if (isPrimeNumber(arr[i]))
			std::cout << arr[i] << ' ';
	}

	std::cout << std::endl;
}

int main()
{
	const size_t SIZE = 7;
	int arr[] = { 6, 4, 5, 43, 12, 15, 7 };
	printArrayPrimeNumbers(arr, SIZE);
	return 0;
}