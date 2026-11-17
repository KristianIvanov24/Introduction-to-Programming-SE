#include <iostream>

const size_t SIZE = 1024;

void printArray(int arr[], size_t size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';

  std::cout << std::endl;
}

void inputArrayElements(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "arr[" << i << "]: ";
		std::cin >> arr[i];
	}
}

int main()
{
    int arr[SIZE];
    int arrSize = 0;

    std::cout << "Input array size: ";
    std::cin >> arrSize;
    inputArrayElements(arr, arrSize);
  
    printArray(arr, arrSize);

    return 0;
}
