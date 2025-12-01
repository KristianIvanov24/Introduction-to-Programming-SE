#include <iostream>
const size_t SIZE = 1024;
bool isSorted(const int arr[], int size)
{
	if (size == 1)
		return true;
	if (size > SIZE)
		return false;
	bool isAscSorted = true, isDescSorted = true;
	for (int i = 1; i <= size; i++)
	{
		if (arr[i - 1] < arr[i])
			isDescSorted = false;
		if (arr[i - 1] > arr[i])
			isAscSorted = false;
	}
	return isAscSorted || isDescSorted;
}
int main()
{
	int size;
	int arr[SIZE];
	std::cout << "Input array size: ";
	std::cin >> size;
	std::cout << "Input " << size << " array elements : ";

	for (int i = 0; i < size; i++)
	{
		int temp;
		std::cin >> temp;
		arr[i] = temp;
	}
	std::cout << isSorted(arr, size);
}
