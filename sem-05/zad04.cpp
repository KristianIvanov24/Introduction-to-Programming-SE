#include <iostream>
//Въвежда се число N (N <= 1000) и N цели числа (елементи на масив). Да се намерят и изведат числата, които са прости в редицата.
const int SIZE = 1000;

int absVal(int number)
{
	return number > 0 ? number : -number;
}
bool isPrime(int number)
{
	number = absVal(number);

	if (number <= 1)
		return false;

	int limit = sqrt(number);
	for (int i = 2; i <= limit; ++i)
	{
		if (number % i == 0)
			return false;
	}

	return true;
}
void findPrimes(const int array[], int result[], size_t size, size_t& resultSize)
{
	resultSize = 0;

	for(int i=0;i<size;++i)
		if (isPrime(array[i]))
		{
			result[resultSize] = array[i];
			resultSize++;
		}
}
void inputArray(int array[], size_t size)
{
	for (int i = 0; i < size; ++i)
		std::cin >> array[i];

	std::cout << '\n';
}
void printArray(const int array[], size_t size)
{
	for (int i = 0; i < size; ++i)
		std::cout << array[i] << ' ';

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
	
	int result[SIZE];
	size_t resultSize = 3;
	findPrimes(array, result, size, resultSize);
	printArray(result, resultSize);
}
