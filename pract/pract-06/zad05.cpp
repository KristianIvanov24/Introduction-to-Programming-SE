#include <iostream>
//Напишете функция, която приема масив от цели числа и връща минимума и максимума.
const int SIZE = 1024;
void findMinAndMax(const int array[], size_t size, int& min, int& max)
{
	min = max = array[0];
	for (int i = 1; i < size; i++)
	{
		if (min > array[i])
			min = array[i];

		if (max < array[i])
			max = array[i];
	}
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

	int min, max;
	findMinAndMax(array, size, min, max);
	std::cout << min << " " << max;
}
