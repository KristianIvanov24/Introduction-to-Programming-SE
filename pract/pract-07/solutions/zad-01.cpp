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

void getMinMaxMatrix(const int matrix[][20], size_t rows, size_t cols,
                     int &minEl, int &maxEl)
{
    minEl = matrix[0][0];
    maxEl = matrix[0][0];

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
        {
            if (matrix[i][j] < minEl)
                minEl = matrix[i][j];
            if (matrix[i][j] > maxEl)
                maxEl = matrix[i][j];
        }
    }
}

int main()
{
    int matrix[N][N];

    size_t m, n;
    std::cin >> m >> n;

    if (m > N || n > N)
    {
        std::cout << "Both dimensions must be <= " << N;
        return 1;
    }

    inputMatrix(matrix, m, n);

    int min = 0, max = 0;

    getMinMaxMatrix(matrix, m, n, min, max);

    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max;
}
