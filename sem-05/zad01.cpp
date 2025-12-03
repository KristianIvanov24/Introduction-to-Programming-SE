#include <iostream>
//Да се напише функция, която приема масив и връща дали е палиндром.
const int SIZE = 1024;

bool isPalindrome(const int array[], size_t size)
{
	size_t limit = size / 2;
	for (int i = 0; i < limit; ++i)
		if (array[i] != array[size - i - 1])
			return false;

	return true;
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
	
	std::cout << isPalindrome(array, size);
}
