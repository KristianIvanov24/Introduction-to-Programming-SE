#include <iostream>

/*
Задача 2 : Въвежда се число N (N <= 1000) и N цели числа (елементи на масив).
Да се отпечатат броя на инверсиите в масива.

Инверсия ще наричаме двойка индекси (i,j), където i < j и arr[i] > arr[j]

Вход: 5 4 3 2 1 0 Изход: 15 //в масива [5 4 3 2 1 0] има 15 инверсии.

Вход: 5 10 11 12 13 14 15, Изход: 0
*/

unsigned countInversions(const int arr[], size_t size)
{
	unsigned count = 0;

	for (size_t i = 0; i < size - 1; ++i) // no need to check the last element, since we need i < j
	{
		for (size_t j = i + 1; j < size; ++j)
		{
			if (arr[i] > arr[j])
				count++;
		}
	}

	return count;
}

int main()
{
	const size_t SIZE = 6;
	int arr[] = { 5, 4, 3, 2, 1, 0 };
	std::cout << countInversions(arr, SIZE);
	return 0;
}