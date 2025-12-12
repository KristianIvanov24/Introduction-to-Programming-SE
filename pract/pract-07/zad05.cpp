#include <iostream>
//Напишете функция, която приема матрица с елементи само 0 и 1. Функцията да връща броя на специалните позиции в матрицата. 
//Специална позиция (i, j) е, такава че matrix[i][j] == 1 и всички други елементи в реда i и колоната j са 0.
const size_t SIZE = 32;

bool isSpecialPos(const bool matrix[][SIZE], size_t row, size_t col, size_t currRow, size_t currCol)
{
	for (int i = 0; i < row; ++i)
		if (matrix[i][currCol] == 1 && i != currRow)
			return false;

	for (int j = 0; j < col; ++j)
		if (matrix[currRow][j] == 1 && j != currCol)
			return false;

	return true;
}
int numOfSpecialPos(const bool matrix[][SIZE], size_t row, size_t col)
{
	int counter = 0;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			if (isSpecialPos(matrix, row, col, i, j))
				counter++;

	return counter;
}
void inputMatrix(bool matrix[][SIZE], size_t row, size_t col)
{
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			std::cin >> matrix[i][j];

	std::cout << '\n';
}
void printMatrix(const bool matrix[][SIZE], size_t row, size_t col)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
			std::cout << matrix[i][j] << ' ';

		std::cout << '\n';
	}

	std::cout << '\n';
}
int main()
{
	size_t row, col;
	std::cout << "Input matrix size: ";
	std::cin >> row >> col;

	bool matrix[SIZE][SIZE];
	inputMatrix(matrix, row, col);

	std::cout << numOfSpecialPos(matrix, row, col);
}
