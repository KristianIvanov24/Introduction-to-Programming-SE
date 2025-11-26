#include <iostream>

void binarySearchMatrix(int matrix[][5], int rows, int cols, int value, int &resultRows, int &resultCols)
{
    int left = 0, right = rows * cols - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        int x = mid / cols;
        int y = mid % cols;

        if (matrix[x][y] == value)
        {
            resultRows = x;
            resultCols = y;
            return;
        }
        else if (matrix[x][y] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    resultRows = -1;
    resultCols = -1;
}

int main()
{
    int matrix[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}};

    int x = 0;
    int y = 0;

    binarySearchMatrix(matrix, 4, 5, 3, x, y);

    std::cout << x << " " << y;
}
