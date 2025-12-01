#include <iostream>
//Да се напишат функции, които приемат два масива (множества) и връщат обединениетo, сечението и разликата на двете множества.
const size_t SIZE = 1024;

void makeEqualArrays(const int array1[], int array2[], size_t size1, size_t& size2)
{
	for (int i = 0; i < size1; ++i)
		array2[i] = array1[i];

	size2 = size1;
}
void ascSort(int array[], size_t size)
{
	for (int i = 0; i < size; ++i)
		for (int j = i; j < size; ++j)
			if (array[j] < array[i])
			{
				array[i] += array[j];
				array[j] = array[i] - array[j];
				array[i] -= array[j];
			}
}
void removeElement(int array[], size_t& size, int pos)
{
	for (int i = pos + 1; i < size; i++)
		array[i - 1] = array[i];

	size--;
}
void unionOfSets(const int array1[], const int array2[], int result[], size_t size1, size_t size2, size_t& sizeResult)
{
	if (size1 + size2 > SIZE)
	{
		std::cout << "Arrays are too big to use union of sets";
		return;
	}

	makeEqualArrays(array1, result, size1, sizeResult);
	size_t limit = size1 + size2;
	for (size_t i = size1, j = 0; i < limit; ++i, ++j)
		result[i] = array2[j];

	sizeResult = size1 + size2;
	ascSort(result, sizeResult);

	for (int i = 1; i < sizeResult; ++i)
		if (result[i] == result[i - 1])
			removeElement(result, sizeResult, i);
}
void intersectionOfSets(const int array1[], const int array2[], int result[], size_t size1, size_t size2, size_t& sizeResult)
{
	makeEqualArrays(array1, result, size1, sizeResult);

	for (int i = 0; i < sizeResult; ++i)
	{
		bool found = false;
		for (int j = 0; j < size2; ++j)
			if (result[i] == array2[j])
			{
				found = true;
				break;
			}

		if (!found)
		{
			removeElement(result, sizeResult, i);
			--i;
		}
	}
}
void setDifference(const int array1[], const int array2[], int result[], size_t size1, size_t size2, size_t& sizeResult)
{
	makeEqualArrays(array1, result, size1, sizeResult);

	for (int i = 0; i < sizeResult; ++i)
	{
		for (int j = 0; j < size2; ++j)
		{
			if (result[i] == array2[j])
			{
				removeElement(result, sizeResult, i);
				i--;
				break;
			}
		}
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

	if (size == 0)
		std::cout << "{}";

	std::cout << "\n";
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

	int result1[SIZE];
	size_t sizeR = 2;

	std::cout << "\nUnion is: ";
	unionOfSets(array1, array2, result1, size1, size2, sizeR);
	printArray(result1, sizeR);

	std::cout << "Intersection is: ";
	intersectionOfSets(array1, array2, result1, size1, size2, sizeR);
	printArray(result1, sizeR);

	std::cout << "Difference is: ";
	setDifference(array1, array2, result1, size1, size2, sizeR);
	printArray(result1, sizeR);
}
