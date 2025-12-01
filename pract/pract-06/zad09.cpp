#include <iostream>
//Напишете функция, която приема масив и връща дължината на най-дългата подредица от еднакви числа и числото от подредицата. 
// Ако има две най-дълги редици с еднаква дължина да върне числото от първата такава.
const size_t SIZE = 1024;

void longestSubArr(const int array[], size_t size, int& longest, int& max)
{
	longest = 1;
	max = array[0];
	int currLength = 1;

	for (int i = 1; i < size; ++i)
	{
		if (array[i] == array[i - 1])
			currLength++;
		else currLength = 1;

		if (currLength > longest)
		{
			longest = currLength;
			max = array[i];
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
}
int main()
{
	size_t size;
	std::cout << "Input size: ";
	std::cin >> size;

	std::cout << "Input " << size << " numbers: ";
	int array[SIZE];
	inputArray(array, size);

	int length = 0, number = 0;
	longestSubArr(array, size, length, number);
	std::cout << "Length: " << length << "\nnumber: " << number;
}
