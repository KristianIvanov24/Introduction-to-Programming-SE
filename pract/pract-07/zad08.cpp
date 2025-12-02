#include <iostream>
//Нека f : {0, 1, ... n - 1} -> {0, 1, ..., m - 1} е функция, представена чрез матрица М с размери n x m, където M[i][j] = 1, ако f(i) = j. 
//Напишете функции, които проверяват дали функцията f е:
const size_t SIZE = 32;

bool isInjection(const bool matrix[][SIZE], size_t row, size_t col)
{
	for (int i = 0; i < col; ++i)
	{
		int counter = 0;
		for (int j = 0; j < row; ++j)
			if (matrix[j][i] == 1)
				counter++;

		if (counter > 1)
			return false;
	}

	return true;
}
bool isSurjection(const bool matrix[][SIZE], size_t row, size_t col)
{
	for (int i = 0; i < col; ++i)
	{
		bool found = false;
		for (int j = 0; j < row; ++j)
			if (matrix[j][i] == 1)
			{
				found = true;
				break;
			}

		if (!found)
			return false;
	}

	return true;

}
bool isBijection(const bool matrix[][SIZE], size_t row, size_t col)
{
	return isSurjection(matrix, row, col) && isInjection(matrix, row, col);
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
	//printMatrix(matrix, row, col);

	std::cout << "Injection: " << isInjection(matrix, row, col);
	std::cout << "\nSurjection: " << isSurjection(matrix, row, col);
	std::cout << "\nBijection: " << isBijection(matrix, row, col);
}
