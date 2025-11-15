#include <iostream>

const int SIZE = 10;

/*
Задача 1: Напишете функция, която приема матрица NxN
и транспонира матрицата.

Вход: 4
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4

Изход:
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/

void swap(int& a, int& b)
{
    a += b;
    b = a - b;
    a -= b;
}

void transposeMatrix(int matrix[][SIZE], size_t n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}