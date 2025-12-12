#include <iostream>
//Напишете фунцкия void printSubarrays(const int[] arr, int size, int k), където k ≤ size и принтира всички подмасиви с дължина k.
const size_t SIZE = 1024;
const int MIN_VALUE = 0;

void printArrFromTo(const int arr[], int from, int to)
{
	for (int i = from; i < to; ++i)
		std::cout << arr[i] << " ";

	std::cout << "\n";
}
void printSubarrays(const int arr[], int size, int k)
{
	if (k > size || k < MIN_VALUE)
	{
		std::cout << "Invalid value";
		return;
	}

	int limit = size - k + 1;
	for (int i = 0; i < limit; ++i)
	{
		printArrFromTo(arr, i, i + k);
	}
}
void inputArray(int array[], size_t size)
{
	for (int i = 0; i < size; ++i)
		std::cin >> array[i];
}
void printArray(const int array[], size_t size)
{
	for (int i = 0; i < size; ++i)
		std::cout << array[i] << " ";
}
int main()
{
	size_t size;
	std::cout << "Input size: ";
	std::cin >> size;

	std::cout << "Input " << size << " numbers: ";
	int array[SIZE];
	inputArray(array, size);

	int k;
	std::cout << "Input number: ";
	std::cin >> k;

	printSubarrays(array, size, k);
}
