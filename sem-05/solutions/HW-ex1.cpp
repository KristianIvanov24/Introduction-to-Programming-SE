#include <iostream>

/*
Задача 1: Да се напише функция, която приема масив и връща дали е палиндром.

Вход: [1 2 3 2 1], Изход: true
*/

bool isArrayPalindrome(const int arr[], size_t size)
{
	size_t halfSize = size / 2;
	for (size_t i = 0; i < halfSize; ++i)
	{
		if (arr[i] != arr[size - i - 1])
			return false;
	}

	return true;
}

int main()
{
	const size_t SIZE = 5;
	int arr[] = { 1, 2, 3, 2, 1 };
	std::cout << (isArrayPalindrome(arr, SIZE) ? "true" : "false") << std::endl;
	return 0;
}