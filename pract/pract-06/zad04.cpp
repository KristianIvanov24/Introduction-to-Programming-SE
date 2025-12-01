#include <iostream>
//Напишете функция, която приема сортиран масив от цели числа и връща медианата му. 
//Медиана е средния елемент на сортиран масив. Ако масива е с четна дължина медианата е средноаритметичното на двата елемента в средата.
const int SIZE = 1024;
bool isSorted(int array[], size_t size)
{
	bool isAscSorted = true, isDescSorted = true;
	for (int i = 1; i < size; i++)
	{
		if (array[i - 1] < array[i])
			isDescSorted = false;

		if (array[i - 1] > array[i])
			isAscSorted = false;
	}

	return isAscSorted || isDescSorted;
}
double median(int array[], size_t size)
{
	if (!isSorted(array, size))
	{
		std::cout << "Array must be sorted";
		return -1;
	}

	int index = size / 2;
	if (size % 2 == 0)
	{
		return (array[index] + array[index - 1]) / 2.0;
	}

	return array[index];
}
void inputArray(int array[], size_t size)
{
	for (int i = 0; i < size; i++)
		std::cin >> array[i];
	std::cout << std::endl;
}
void printArray(const int array[], size_t size)
{
	for (int i = 0; i < size; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}
int main()
{
	size_t size;
	std::cout << "Input array size: ";
	std::cin >> size;

	int array[SIZE];
	std::cout << "Input " << size << " numbers: ";
	inputArray(array, size);
	printArray(array, size);

	std::cout << median(array, size);
}
