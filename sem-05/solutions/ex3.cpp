#include <iostream>

// Линейно търсене в масив - връща индекса на намерения елемент или -1 ако не е намерен

const int SIZE = 5;

int linearSearch(const int arr[], size_t size, int toFind)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == toFind)
			return i;
	}

	return -1;
}

int main()
{
  int arr[SIZE] = {1, 2, 3, 4, 5};
  int toFind = 4;

  std::cout << linearSearch(arr, SIZE, toFind);

  return 0;
}
