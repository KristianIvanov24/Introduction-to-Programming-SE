#include <iostream>
//Въвежда се число N (N <= 1000) и N цели числа (елементи на масив). Да се отпечатат броя на инверсиите в масива.
//Инверсия ще наричаме двойка индекси(i, j), където i < j и arr[i] > arr[j]
const int SIZE = 1000;

int numOfInversions(const int array[], size_t size)
{
	int counter = 0;

	for (int i = 0; i < size; ++i)
		for (int j = i + 1; j < size; ++j)
			if (array[i] > array[j])
				counter++;

	return counter;
}
void inputArray(int array[], size_t size)
{
	for (int i = 0; i < size; ++i)
		std::cin >> array[i];

	std::cout << '\n';
}
int main()
{
	size_t size;
	std::cout << "Input array size: ";
	std::cin >> size;

	int array[SIZE];
	std::cout << "Input " << size << " numbers: ";
	inputArray(array, size);
	
	std::cout << numOfInversions(array, size);
}
