#include <iostream>
//Напишете функция, която приема два масива от цели числа и проверява дали вторият масив е подмасив на първия.
const size_t SIZE = 1024;

bool isSubArray(const int array1[], const int array2[], size_t size1, size_t size2)
{
	if (size1 < size2)
		return false;

	int currIndex = 0;
	for (int i = 0; i < size1; ++i)
	{
		if (array1[i] == array2[currIndex])
			currIndex++;
		else
			currIndex = 0;

		if (currIndex == size2)
			return true;
	}

	return false;
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

	std::cout << isSubArray(array1, array2, size1, size2);
}
