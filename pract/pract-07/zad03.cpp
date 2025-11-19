#include <iostream>
//Напишете функция, която проверява дали в частта над главния диагонал на квадратна матрица от естествени числа съществува просто число.
const size_t SIZE = 32;
const int MIN_VALUE = 0;

bool isPrime(int number)
{
	if(number <= MIN_VALUE)
		return false;

	if (number == 1)
		return false;

	int limit = sqrt(number);
	for (int i = 2; i <= limit; i++)
	{
		if (number % i == 0)
			return false;
	}

	return true;
}
bool containsPrimeAboveMainDiag(int matrix[SIZE][SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if(isPrime(matrix[i][j]))
				return true;
		}
	}

	return false;
}
void inputMatrix(int matrix[SIZE][SIZE], int size)
{
	if (size < MIN_VALUE)
	{
		std::cout << "Invalid data";
		return;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			std::cin >> matrix[i][j];
	}
}
int main()
{
	int size;
	std::cout << "input number of rows and columns: ";
	std::cin >> size;

	int matrix[SIZE][SIZE];
	std::cout << "Input " << size * size << " numbers: ";
	inputMatrix(matrix, size);

	std::cout << containsPrimeAboveMainDiag(matrix, size);
}
