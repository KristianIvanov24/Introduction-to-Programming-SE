#include <iostream>

const size_t N = 20;

void inputMatrix(int matrix[][N], size_t m, size_t n)
{
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

int countSpecialPositions(const int matrix[][N], size_t m, size_t n)
{
    int rowCount[N] = {0};
    int colCount[N] = {0};

    // броим колко единици има във всеки ред и колона
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1)
            {
                rowCount[i]++;
                colCount[j]++;
            }
        }
    }

    int count = 0;
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1 && rowCount[i] == 1 && colCount[j] == 1)
            {
                count++;
            }
        }
    }

    return count;
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

    int result = countSpecialPositions(matrix, m, n);

    std::cout << "Special positions: " << result;
}
