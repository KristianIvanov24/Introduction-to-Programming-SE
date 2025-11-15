#include <iostream>

const int SIZE = 10;

void inputMatrixElements(int matrix[][SIZE], size_t rows, size_t cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << "matrix[" << i << "]" << "[" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }
}