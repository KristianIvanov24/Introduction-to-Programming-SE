#include <iostream>

/*
Задача 5 : Въвежда се число N (N <= 1000) и N цели числа (елементи на масив). 
Да се провери дали в масива има поне два последователни елемента равни на 0.

Вход: 5 3 -27 16 0 0 Изход: Yes
*/

const int REPEATED_NUMBER = 0;

bool hasConsecutiveZeroes(const int arr[], size_t size)
{
	for (size_t i = 0; i < size - 1; ++i)
	{
		if (arr[i] == REPEATED_NUMBER && arr[i] == arr[i + 1])
		{
			return true;
		}
	}

	return false;
}

int main()
{
	const size_t SIZE = 6;
	int arr[] = { 0, 0, 3, 16, 5, 7 };
	std::cout << (hasConsecutiveZeroes(arr, SIZE) ? "Yes" : "No") << std::endl;

	return 0;
}