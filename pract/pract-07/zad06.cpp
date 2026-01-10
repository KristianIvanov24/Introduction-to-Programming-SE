#include <iostream>
//Напишете функция, която приема квадратна матрица и отпечатва елементите ѝ на зиг-заг (първи ред отляво надясно, втори ред отдясно наляво и т.н.)
const size_t SIZE = 32;


void zigZagPrint(const int matrix[][SIZE], size_t row, size_t col)
{
	for (int i = 0; i < row; ++i)
	{
		if (i % 2 == 0)
			for (int j = 0; j < col; ++j)
				std::cout << matrix[i][j] << ' ';
		else
			for (int j = col - 1; j >= 0; j--)
				std::cout << matrix[i][j] << ' ';

		std::cout << '\n';
	}
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

	zigZagPrint(matrix, row, col);
}
