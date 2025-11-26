#include <iostream>

const size_t N = 20;

void inputMatrix(int matrix[][N], size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
        for (size_t j = 0; j < cols; j++)
            std::cin >> matrix[i][j];
}

void printMatrix(const int matrix[][N], size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
            std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }
}

void rotateRight(const int matrix[][N], size_t m, size_t n, int result[][N])
{
    for (size_t i = 0; i < m; i++)
        for (size_t j = 0; j < n; j++)
            result[j][m - i - 1] = matrix[i][j];
}

void transposeMatrix(int matrix[][N], size_t n)
{
    for (size_t i = 0; i < n; i++)
        for (size_t j = i + 1; j < n; j++)
            std::swap(matrix[i][j], matrix[j][i]);
}

// алтернативно решение без друга матрица, работи само за квадратни

void rotateSquareMatrixRightInPlace(int matrix[][N], size_t n)
{
    transposeMatrix(matrix, n);

    // reverse-ва редовете както reverse-ваме едномерни масиви
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n / 2; j++)
        {
            std::swap(matrix[i][j], matrix[i][n - j - 1]);
        }
    }
}

int main()
{
    int matrix[N][N], rotated[N][N];
    size_t m, n;

    std::cin >> m >> n;
    if (m > N || n > N)
    {
        std::cout << "Dimensions must be <= " << N;
        return 1;
    }

    inputMatrix(matrix, m, n);

    rotateRight(matrix, m, n, rotated);

    printMatrix(rotated, n, m);
}
