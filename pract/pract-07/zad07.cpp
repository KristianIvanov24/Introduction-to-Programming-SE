#include <iostream>
//Напишете функция, която приема сортирана матрица и елемент за търсене. Фунцкията да връща реда и колоната на търсения елемент. 
//Ако елемента не е в матрицата да върне -1. Задачата да се реши оптимално, без да се обхождат всички елементи на матрицата.
const size_t SIZE = 32;

void findElement(int matrix[][SIZE], size_t row, size_t col,int target, int& targetRow, int& targetCol)
{
	int begin = 0;
	int end = row * col - 1;
	while (begin != end)
	{
		int mid = (begin + end) / 2;
		int currRow = mid / row;
		int currCol = mid % row;
		int currEl = matrix[currRow][currCol];

		if (currEl == target)
		{
			targetRow = currRow;
			targetCol = currCol;
			return;
		}

		if (currEl < target)
			begin = mid + 1;
		else
			end = mid;
	}

	targetRow = targetCol = -1;
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

	int target;
	std::cout << "Enter a taget number: ";
	std::cin >> target;

	int tR = 5, tC = 3;
	findElement(matrix, row, col, target, tR, tC);
	std::cout << tR << ' ' << tC;
}
