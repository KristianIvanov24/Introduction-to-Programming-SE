#include <iostream>
//Напишете функция, която приема матрица и я обръща надясно.
const size_t SIZE = 32;

void rotateMatrix(int matrix[][SIZE], size_t& row, size_t& col)
{
	int tempMatrix[SIZE][SIZE];
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			tempMatrix[j][row-i-1] = matrix[i][j];
	
	for (int i = 0; i < col; ++i)
		for (int j = 0; j < row; ++j)
			matrix[i][j] = tempMatrix[i][j];

	row += col;
	col = row - col;
	row -= col;
}
void inputMatrix(int matrix[][SIZE], size_t row, size_t col)
{
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			std::cin >> matrix[i][j];

	std::cout << '\n';
}
void printMatrix(const int matrix[][SIZE], size_t row, size_t col)
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

	int matrix[SIZE][SIZE];
	inputMatrix(matrix, row, col);
	printMatrix(matrix, row, col);

	rotateMatrix(matrix, row, col);
	printMatrix(matrix, row, col);
}
