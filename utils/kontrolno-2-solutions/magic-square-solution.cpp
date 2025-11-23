#include <iostream>

const size_t MIN_COLS = 1;
const size_t MAX_COLS = 20;

void inputMatrix(int matrix[][MAX_COLS], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void multiplySquareMatrices(
    const int matrix1[MAX_COLS][MAX_COLS],
    const int matrix2[MAX_COLS][MAX_COLS],
    int result[MAX_COLS][MAX_COLS],
    size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            result[i][j] = 0;

            for (size_t k = 0; k < size; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

long long getMainDiagonalSum(const int matrix[MAX_COLS][MAX_COLS], size_t size)
{
    long long sum = 0;

    for (size_t i = 0; i < size; i++)
    {
        sum += matrix[i][i];
    }

    return sum;
}

long long getSecondDiagonalSum(const int matrix[MAX_COLS][MAX_COLS], size_t size)
{
    long long sum = 0;

    for (size_t i = 0; i < size; i++)
    {
        sum += matrix[i][size - i - 1];
    }

    return sum;
}

bool isMagicSquare(const int matrix[MAX_COLS][MAX_COLS], size_t size)
{
    long long mainSum = getMainDiagonalSum(matrix, size);
    long long secondSum = getSecondDiagonalSum(matrix, size);

    if (mainSum != secondSum)
    {
        return false;
    }

    for (size_t i = 0; i < size; i++)
    {
        long long rowSum = 0;
        long long colSum = 0;
        for (size_t j = 0; j < size; j++)
        {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }

        if (rowSum != mainSum || colSum != mainSum)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int m1[MAX_COLS][MAX_COLS];
    int m2[MAX_COLS][MAX_COLS];

    size_t size;
    std::cin >> size;

    if (size < MIN_COLS || size > MAX_COLS)
    {
        std::cout << "Invalid size. Size must be in range [" << MIN_COLS << ";" << MAX_COLS << "]";
    }
    else
    {
        inputMatrix(m1, size);
        inputMatrix(m2, size);

        int product[MAX_COLS][MAX_COLS];
        multiplySquareMatrices(m1, m2, product, size);
        
        if (isMagicSquare(product, size))
        {
            std::cout << "The matrix is a magic square.";
        }
        else
        {
            std::cout << "The matrix is not a magic square.";
        }
    }

    return 0;
}
