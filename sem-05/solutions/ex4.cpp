#include <iostream>

// Двоично търсене - връща индекса на намерения елемент или -1 ако не е намерен

const int SIZE = 5;

int binarySearch(int arr[], size_t size, int toFind)
{
	int begin = 0;
	int end = size - 1;

	while (begin <= end)
	{
		int mid = (begin + end) / 2;

		if (arr[mid] < toFind)
		{
			begin = mid + 1;
		}
		else if (arr[mid] > toFind)
		{
			end = mid - 1;
		}
		else
		{
			return mid;
		}
	}

	return -1;
}

int main()
{
	int sortedArr[SIZE] = { 1, 5, 12, 15, 20 };
	std::cout << binarySearch(sortedArr, SIZE, 15);
}
