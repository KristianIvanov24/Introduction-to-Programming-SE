#include <iostream>
//Напишете функция, която приема масив от цели числа и размера му, и премахва отрицателните елементи.
const size_t SIZE = 1024;

void removeElement(int array[], size_t& size, size_t pos)
{
	for (int i = pos; i < size; i++)
		array[i] = array[i + 1];

	size--;
}
void remNegEl(int array[], size_t& size)
{
	for (int i = 0; i < size; i++)
		if (array[i] < 0)
		{
			removeElement(array, size, i);
			i--;
		}
}
void inputArray(int array[], size_t size)
{
	for (int i = 0; i < size; ++i)
		std::cin >> array[i];
}
void printArray(int array[], size_t size)
{
	for (int i = 0; i < size; ++i)
		std::cout << array[i];
}
int main()
{
	size_t size;
	std::cout << "Input size: ";
	std::cin >> size;

	std::cout << "Input " << size << " numbers: ";
	int array[SIZE];
	inputArray(array, size);

	remNegEl(array, size);
	//printArray(array, size);
	//std::cout << " "<<size;
}
