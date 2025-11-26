#include <iostream>

const int N = 20;

void inputMatrix(int matrix[][N], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

bool isInjection(const int matrix[][N], int n, int m)
{
    if (m < n)
    {
        return false;
    }

    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (matrix[j][i] == 1)
            {
                count++;
            }
        }

        if (count > 1)
        {
            return false;
        }
    }

    return true;
}

bool isSurjection(const int matrix[][N], int n, int m)
{
    if (n < m)
    {
        return false;
    }

    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (matrix[j][i] == 1)
            {
                count++;
            }
        }

        if (count == 0)
        {
            return false;
        }
    }

    return true;
}

bool isBijection(const int matrix[][N], int n, int m)
{
    if (n != m)
    {
        return false;
    }

    return isInjection(matrix, n, m) && isSurjection(matrix, n, m);
}

int main()
{
    int matrix[N][N];

    int n, m;
    std::cin >> n >> m;

    inputMatrix(matrix, n, m);

    std::cout << "Injection: " << isInjection(matrix, n, m) << std::endl;
    std::cout << "Surjection: " << isSurjection(matrix, n, m) << std::endl;
    std::cout << "Bijection: " << isBijection(matrix, n, m) << std::endl;
}