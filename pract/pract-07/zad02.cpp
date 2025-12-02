#include <iostream>
//Напишете функция, която приема квадратна матрица и отпечатва главния диагонал, след това и второстепенния.
const size_t SIZE = 32;
const int MIN_VALUE = 0;

void printMainDiagonal(const int matrix[SIZE][SIZE], int size)
{
	std::cout << "Main diagonal is: ";

	if (size < MIN_VALUE)
	{
		std::cout << "Invalid data";
		return;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << matrix[i][i] << " ";
	}
	
	std::cout << std::endl;
}
void printSecondaryDiag(const int matrix[SIZE][SIZE], int size)
{
	std::cout << "Secondary diagonal is: ";

	if (size < MIN_VALUE)
	{
		std::cout << "Invalid data";
		return;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << matrix[i][size-i-1] << " ";
	}

	std::cout << std::endl;
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

	printMainDiagonal(matrix, size);
	printSecondaryDiag(matrix, size);
}
