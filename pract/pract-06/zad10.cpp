#include <iostream>
//Напишете функция, която приема 2 масива, съставени само от цифрите от 0 до 9, с еднаква дължина. 
//Функцията да връща дали вторият масив е пермутация на първия.
const size_t SIZE = 1024;
const short MAX_VALUE = 9;
const short MIN_VALUE = 0;
bool isPermutation(const int array1[], const int array2[], size_t size)
{
	for (int i = 0; i < size; ++i)
		if (array1[i] < MIN_VALUE || array1[i] > MAX_VALUE || array2[i] < MIN_VALUE || array2[i] > MAX_VALUE)
		{
			std::cout << "Invalid data";
			return 0;
		}

	const int diffValues = 10;
	int valueCount[diffValues] = { 0 };
	for (int i = 0; i < size; ++i)
	{
		int currValue = array1[i];
		valueCount[currValue]++;

		currValue = array2[i];
		valueCount[currValue]--;
	}

	for (int i = 0; i < diffValues; ++i)
		if (valueCount[i] != 0)
			return false;

	return true;
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
	int array1[SIZE];
	inputArray(array1, size);

	std::cout << "Input " << size << " numbers: ";
	int array2[SIZE];
	inputArray(array2, size);

	std::cout << isPermutation(array1, array2, size);
}
