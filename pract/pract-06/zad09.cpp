#include <iostream>
//Напишете функция, която приема масив и връща дължината на най-дългата подредица от еднакви числа и числото от подредицата. 
// Ако има две най-дълги редици с еднаква дължина да върне числото от първата такава.
const size_t SIZE = 1024;

int longestSubArr(const int array[], size_t size)
{
	int longest = 1;
	int max = array[0];
	int currLength = 0;

	for (int i = 1; i < size; ++i)
	{
		if (array[i] == array[i - 1])
			currLength++;
		else currLength = 0;

		if (currLength > longest)
		{
			longest = currLength;
			max = array[i];
		}
	}

	return max;
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

	std::cout << longestSubArr(array, size);
}
