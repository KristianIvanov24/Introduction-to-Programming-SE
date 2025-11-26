#include <iostream>

const size_t N = 20;

void inputMatrix(int matrix[][N], size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void printMainDiagonal(const int matrix[][N], size_t n)
{
    std::cout << "Main diagonal: ";
    for (size_t i = 0; i < n; i++)
    {
        std::cout << matrix[i][i] << " ";
    }
    std::cout << std::endl;
}

void printSecondDiagonal(const int matrix[][N], size_t n)
{
    std::cout << "Second diagonal: ";
    for (size_t i = 0; i < n; i++)
    {
        std::cout << matrix[i][n - i - 1] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int matrix[N][N];

    size_t n;
    std::cin >> n;

    if (n > N)
    {
        std::cout << "Dimension must be <= " << N;
        return 1;
    }

    inputMatrix(matrix, n, n);

    printMainDiagonal(matrix, n);
    printSecondDiagonal(matrix, n);
}