#include <iostream>
//Напишете функция, която приема масив от цели числа и число k, и обръща първите k елемента на масива.
const int SIZE = 1024;
void reverseFirstElements(int array[], size_t k, size_t size)
{
	const size_t endFor = k / 2;
	for (int i = 0, j = k - 1; i < k/2; i++, j--)
	{
		array[i] += array[j];
		array[j] = array[i] - array[j];
		array[i] -= array[j];
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

	size_t k;
	std::cout << "Enter how many elements you want to reverse: ";
	std::cin >> k;

	reverseFirstElements(array, k, size);
	printArray(array, size);
}
