#include <iostream>
//Напишете функция, която приема матрица и връща най-малкия и най-големия ѝ елемент.
const size_t SIZE = 100;
const int MIN_VALUE = 0;
void minAndMaxElements(const int matrix[SIZE][SIZE],int rows,int cols) 
{
	if (rows < MIN_VALUE || cols < MIN_VALUE)
	{
		std::cout << "Invalid data";
		return;
	}

	int min = matrix[0][0];
	int max = matrix[0][0];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (min > matrix[i][j])
				min = matrix[i][j];

			if (max < matrix[i][j])
				max = matrix[i][j];
		}
	}

	std::cout << "the smallest is: " << min <<std::endl<< "the biggest is: " << max;
}

void inputMatrix(int matrix[SIZE][SIZE], int rows, int cols)
{
	if (rows < MIN_VALUE || cols < MIN_VALUE)
	{
		std::cout << "Invalid data";
		return;
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			std::cin >> matrix[i][j];
	}
}
int main()
{
	int rows, cols;
	std::cout << "input number of rows and columns: ";
	std::cin >> rows >> cols;

	int matrix[SIZE][SIZE];
	std::cout << "Input " << rows * cols << " numbers: ";
	inputMatrix(matrix, rows, cols);
	minAndMaxElements(matrix, rows, cols);
}
