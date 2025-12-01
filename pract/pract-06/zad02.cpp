#include <iostream>
const size_t SIZE = 1024;
void removeIndex(int arr[], int size, int pos)
{
	if (size > SIZE || size == 0)
		return;
	for (int i = pos; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
}
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
}
int main()
{
	//Напишете фунцкия, която приема масив от цели числа и премахва елемент на индекс pos
	int size;
	int arr[SIZE];
	std::cout << "Input array size: ";
	std::cin >> size;
	std::cout << "Input " << size << " array elements : ";
	for (int i = 0; i < size; i++)
	{
		int temp;
		std::cin >> temp;
		arr[i] = temp;
	}
	std::cout << "Input position to be removed:";
	unsigned index;
	std::cin >> index;
	removeIndex(arr, size, index);
	printArray(arr, size - 1);
}
