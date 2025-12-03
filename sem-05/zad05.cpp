#include <iostream>
//Въвежда се число N (N <= 1000) и N цели числа (елементи на масив). Да се провери дали в масива има поне два последователни елемента равни на 0.
const int SIZE = 1000;

bool hasTwoZerosInARow(const int array[], size_t size)
{
	for (int i = 1; i < size; ++i)
		if (array[i] != 0)
			++i;
		else if (array[i - 1] == 0)
			return true;

	return false;
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
	
	std::cout << hasTwoZerosInARow(array, size);
}
