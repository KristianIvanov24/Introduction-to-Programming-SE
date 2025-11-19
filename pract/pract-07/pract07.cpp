/*#include <iostream>
//1
const int CAPACITY = 20;

void inputMatrix(int matrix[][CAPACITY], size_t rows, size_t cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}
}

void findMaximalAndMinimalElement(const int matrix[][CAPACITY], size_t rows, size_t cols, int& max, int& min)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
			}
		}
	}
}

int main()
{
	size_t rows,cols;
	std::cout << "Input amount of rows:";
	std::cin >> rows;
	std::cout << "Input amount of cols:";
	std::cin >> cols;
	int matrix[CAPACITY][CAPACITY];
	std::cout << "Input your matrix:"<<std::endl;
	inputMatrix(matrix, rows, cols);
	int max = matrix[0][0];
	int min = matrix[0][0];
	findMaximalAndMinimalElement(matrix, rows, cols, max, min);
	std::cout << "Maximal element:" << max << std::endl << "Minimal element:" << min << std::endl;
}
//2
#include <iostream>

const int CAPACITY = 20;

void inputMatrix(int matrix[][CAPACITY], size_t n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}
}

void printMainAndSecondaryDiagonal(int matrix[][CAPACITY], size_t n)
{
	std::cout << "elements on main diagonal:";
	for (int i = 0; i < n; ++i)
	{
		std::cout << matrix[i][i]<<' ';
	}
	std::cout << std::endl;
	std::cout << "elements on secondary diagonal:";
	for (int i = n - 1; i >= 0; --i)
	{
		std::cout << matrix[n - 1 - i][i] << ' ';
	}
}

int main()
{
	size_t n;
	std::cout << "Input amount of rows and cols:" << std::endl;
	std::cin >> n;
	int matrix[CAPACITY][CAPACITY];
	std::cout << "Input your matrix:" << std::endl;
	inputMatrix(matrix, n);
	printMainAndSecondaryDiagonal(matrix, n);
}
//3
#include<iostream>

const int CAPACITY = 20;

void inputMatrix(int matrix[][CAPACITY], size_t n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}
}

bool isPrimeNumber(int number)
{
	if (number < 2)return false;
	int sqrtn = sqrt(number);
	for (int i = 2; i <= sqrtn; ++i)
	{
		if (number % i == 0)return false;
	}
	return true;
}

bool isTherePrimeNumberAboveMainDiagonal(int matrix[][CAPACITY], size_t n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (isPrimeNumber(matrix[i][j])) return true;
		}
	}
	return false;
}

int main()
{
	size_t n;
	std::cout << "Input amount of rows and cols:" << std::endl;
	std::cin >> n;
	int matrix[CAPACITY][CAPACITY];
	std::cout << "Input your matrix:" << std::endl;
	inputMatrix(matrix, n);
	std::cout << (isTherePrimeNumberAboveMainDiagonal(matrix, n) ? "There is a prime number." : "There is no prime number.");
}
//4
#include <iostream>

const int CAPACITY = 20;

void printMatrix(const int matrix[][CAPACITY], size_t rows, size_t cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			std::cout << matrix[i][j] << ' ';
		}
		std::cout << std::endl;
	}
}

void inputMatrix(int matrix[][CAPACITY], size_t rows, size_t cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}
}

void swap(int& a, int& b)
{
	a += b;
	b = a - b;
	a -= b;
}

void copyOfmatrix(const int matrix[][CAPACITY], int copyMatrix[][CAPACITY], size_t rows, size_t cols)
{

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			copyMatrix[i][j] = matrix[i][j];
		}
	}
}

void printMatrixToTheRight(const int matrix[][CAPACITY], int rows, int cols)
{
	swap(rows, cols);
	int copyMatrix[CAPACITY][CAPACITY];
	copyOfmatrix(matrix, copyMatrix, rows, cols);
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			copyMatrix[i][j] = matrix[cols - 1 - j][i];
		}
	}
	printMatrix(copyMatrix, rows, cols);
}

int main()
{
	size_t rows, cols;
	std::cout << "Input amount of rows:";
	std::cin >> rows;
	std::cout << "Input amount of cols:";
	std::cin >> cols;
	int matrix[CAPACITY][CAPACITY];
	std::cout << "Input your matrix:" << std::endl;
	inputMatrix(matrix, rows, cols);
	std::cout << "Your rotated matrix is:" << std::endl;
	printMatrixToTheRight(matrix, rows, cols);
}
//5
#include <iostream>

const int CAPACITY = 20;

void inputMatrix(int matrix[][CAPACITY], size_t rows, size_t cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			std::cin >> matrix[i][j];
			if (matrix[i][j] < 0 || matrix[i][j]>1)
			{
				std::cout << "Wrong input! All elements must be equal to 0 or 1!";
				return;
			}
		}
	}
}

bool isBiggestInRow(const int matrix[][CAPACITY], size_t rows, size_t cols,int r,int c)
{
	for (int i = 0; i < cols; ++i)
	{
		if (matrix[r][c] <= matrix[r][i] && i!=c)
		{
			return false;
		}
	}
	return true;
}

bool isBiggestInCol(const int matrix[][CAPACITY], size_t rows, size_t cols, int r, int c)
{
	for (int i = 0; i < rows; ++i)
	{
		if (matrix[r][c] <= matrix[i][c] && i!=r)
		{
			return false;
		}
	}
	return true;
}

bool isSpecialElement(const int matrix[][CAPACITY], size_t rows, size_t cols, int r, int c)
{
	return(isBiggestInCol(matrix,rows,cols,r,c) && isBiggestInRow(matrix, rows, cols, r, c));
}

int countOfSpecialElements(const int matrix[][CAPACITY], const size_t rows, const size_t cols)
{
	int count = 0;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (isSpecialElement(matrix,rows,cols,i,j))
			{
				count++;
			}
		}
	}
	return count;
}

int main()
{
	size_t rows, cols;
	std::cout << "Input amount of rows:";
	std::cin >> rows;
	std::cout << "Input amount of cols:";
	std::cin >> cols;
	int matrix[CAPACITY][CAPACITY];
	std::cout << "Input your matrix:" << std::endl;
	inputMatrix(matrix, rows, cols);
	int result = countOfSpecialElements(matrix, rows, cols);
	std::cout << "Amount of special elements:" << result;
}
//6
#include <iostream>

const int CAPACITY = 20;

void inputMatrix(int matrix[][CAPACITY], size_t rows, size_t cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}
}

void printZigZagMatrix(const int matrix[][CAPACITY], size_t rows, size_t cols)
{
	int row = 0;
	while(row<rows)
	{
		if (row % 2 == 0)
		{
			for (int i = 0; i < cols; ++i)
			{
				std::cout << matrix[row][i] << ' ';
			}
		}
		else
		{
			for (int i = cols-1; i >=0; --i)
			{
				std::cout << matrix[row][i] << ' ';
			}
		}
		row++;
	}
}

int main()
{
	size_t rows, cols;
	std::cout << "Input amount of rows:";
	std::cin >> rows;
	std::cout << "Input amount of cols:";
	std::cin >> cols;
	int matrix[CAPACITY][CAPACITY];
	std::cout << "Input your matrix:" << std::endl;
	inputMatrix(matrix, rows, cols);
	std::cout << "Zig-Zag Matrix:" << std::endl;
	printZigZagMatrix(matrix, rows, cols);
}
//7
#include <iostream>

const int CAPACITY = 20;

void inputMatrix(int matrix[][CAPACITY], size_t rows, size_t cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}
}

int matrixSearchWhichRow(const int matrix[][CAPACITY], size_t rows, int k)
{
	for (int i = 0; i < rows - 1; ++i)
	{
		if (matrix[i][0]<k && matrix[i + 1][0]>k)
		{
			return i;
		}
	}
	return rows;
}

int matrixSearchWhichCol(const int matrix[][CAPACITY],size_t rows, size_t cols, int k)
{
	int row = matrixSearchWhichRow(matrix, rows, k);
	int left = 0;
	int right = cols - 1;
	while (left <= right)
	{
		int middle = (left + right) / 2;
		if (matrix[row][middle] == k)
		{
			return middle;
		}
		else if (matrix[row][middle] < k)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return -1;
}

int main()
{
	size_t rows, cols;
	std::cout << "Input amount of rows:";
	std::cin >> rows;
	std::cout << "Input amount of cols:";
	std::cin >> cols;
	int matrix[CAPACITY][CAPACITY];
	int k;
	std::cout << "Which number you want to find?";
	std::cin >> k;
	std::cout << "Input your matrix:" << std::endl;
	inputMatrix(matrix, rows, cols);
	int rowresult = matrixSearchWhichRow(matrix, rows, k);
	int colresult = matrixSearchWhichCol(matrix, rows, cols, k);
	if (colresult==-1)
	{
		std::cout << -1;
		return 0;
	}
	std::cout << "Index of rows:" << rowresult << std::endl << "Index of cols:" << colresult;
}

//8

#include <iostream>


const int CAPACITY = 20;

void inputMatrix(int matrix[][CAPACITY], size_t rows, size_t cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			std::cin >> matrix[i][j];
			if (matrix[i][j] < 0 || matrix[i][j]>1)
			{
				std::cout << "Wrong input! All elements must be equal to 0 or 1!";
				return;
			}
		}
	}
}

bool countherOfOnesInARow(const int matrix[][CAPACITY], size_t rows, size_t cols)
{
	for (int i = 0; i < rows; ++i)
	{
		int count = 0;
		for (int j = 0; j < cols; ++j)
		{
			if (matrix[i][j] == 1)
			{
				count++;
			}
		}
		if (count != 1)return false;
	}
	return true;
}

int countherOfOnesInACol(const int matrix[][CAPACITY], size_t rows, size_t cols,int k)
{
	int count = 0;
	for (int j = 0; j < rows; ++j)
	{
		if (matrix[j][k])
			count++;
	}
	return count;
}

bool injection(int matrix[][CAPACITY], size_t rows, size_t cols)
{
	for (int i = 0; i < cols; ++i)
	{
		if (countherOfOnesInACol(matrix, rows, cols, i) > 1)
			return false;
	}
	return true;
}

bool surjection(int matrix[][CAPACITY], size_t rows, size_t cols)
{
	for (int i = 0; i < cols; ++i)
	{
		if (countherOfOnesInACol(matrix, rows, cols, i) < 1)
			return false;
	}
	return true;
}

bool bijection(int matrix[][CAPACITY], size_t rows, size_t cols)
{
	return (injection(matrix, rows, cols) && surjection(matrix, rows, cols));
}



int main()
{
	size_t rows, cols;
	std::cout << "Input amount of rows:";
	std::cin >> rows;
	std::cout << "Input amount of cols:";
	std::cin >> cols;
	int matrix[CAPACITY][CAPACITY];
	std::cout << "Input your matrix:" << std::endl;
	inputMatrix(matrix, rows, cols);
	if (!countherOfOnesInARow(matrix,rows,cols))
	{
		std::cout << "The number 1 must apear excactly one time in a row because f(i) can give us only one value!";
		return 0;
	}
	std::cout << "Injection:" << (injection(matrix, rows, cols) ? "true" : "false")<<std::endl;
	std::cout << "Surjection:" << (surjection(matrix, rows, cols) ? "true" : "false") << std::endl;
	std::cout << "Bijection:" << (bijection(matrix, rows, cols) ? "true" : "false") << std::endl;
}*/