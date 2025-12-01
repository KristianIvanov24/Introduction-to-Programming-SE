#include <iostream>
//Напишете функция, която приема два сортирани масива и ги слива в трети масив като поддържа сортировката.
const size_t SIZE = 1024;
const int MIN_VALUE = 0;

void sortAscOrdDesc(int arr[], size_t size, bool isAsc)
{
		for (int i = 0; i < size; ++i)
			for (int j = i; j < size; ++j)
				if (arr[i] > arr[j] && isAsc)
				{
					arr[i] += arr[j];
					arr[j] = arr[i] - arr[j];
					arr[i] -= arr[j];
				} 
				else
					if (arr[i] < arr[j] && !isAsc)
					{
						arr[i] += arr[j];
						arr[j] = arr[i] - arr[j];
						arr[i] -= arr[j];
					}

}
void mergeArrays(const int arr1[], const int arr2[], int result[], size_t size1, size_t size2)
{
	if (size1 + size2 > SIZE)
	{
		std::cout << "The arrays are too big";
		return;
	}

	for (int i = 0; i < size1; ++i)
		result[i] = arr1[i];

	size_t limit = size1 + size2;
	for (size_t i = size1, j = 0; i < limit; ++i, ++j)
		result[i] = arr2[j];

	if (size1 == 1)
		sortAscOrdDesc(result, size1 + size2, 1);
	else
		sortAscOrdDesc(result, size1 + size2, arr1[0] <= arr1[1]);

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
	size_t size1;
	std::cout << "Input size: ";
	std::cin >> size1;

	std::cout << "Input " << size1 << " numbers: ";
	int array1[SIZE];
	inputArray(array1, size1);

	size_t size2;
	std::cout << "Input size: ";
	std::cin >> size2;

	std::cout << "Input " << size2 << " numbers: ";
	int array2[SIZE];
	inputArray(array2, size2);

	int result[SIZE];
	mergeArrays(array1, array2, result, size1, size2);
	printArray(result, size1+size2);
}
