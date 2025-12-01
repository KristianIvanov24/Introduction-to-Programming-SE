#include <iostream>
//Напишете функция int findZero(const int[] arr, size_t size), която приема масив от цели числа, в който първо са разположени нечетни числа,
//след тях има точно една нула, а след нея - четни числа, и връща индекса на тази нула или -1, ако такава няма. 
//Задачата да се реши оптимално, без да се обхождат последователно всички елементи на масива.
const size_t SIZE = 1024;

int findZero(const int arr[], size_t size)
{
	int begin = 0;
	int end = size - 1;

	while (begin != end)
	{
		int mid = (begin + end) / 2;

		if (arr[mid] == 0)
			return mid;

		if (arr[mid] % 2 == 0)
			end = (mid + end) / 2;
		else
			begin = (mid + begin) / 2 + 1;
	}
  
	return -1;
}
void inputArray(int array[], size_t size)
{
	for (int i = 0; i < size; ++i)
		std::cin >> array[i];
}
void printArray(const int array[], size_t size)
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

	std::cout << findZero(array, size);
}
