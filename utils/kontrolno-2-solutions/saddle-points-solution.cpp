#include <iostream>

const size_t MIN_COLS = 1;
const size_t MAX_COLS = 20;

void printMatrix(const int matrix[][MAX_COLS], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

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

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

// can overflow int :)
void swapKrisWay(int& a, int& b)
{
    a += b;
    b = a - b;
    a -= b;
}

void transposeMatrix(int matrix[][MAX_COLS], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
            // or swapKrisWay(matrix[i][j], matrix[j][i])
        }
    }
}

int findMaxInRow(const int matrix[][MAX_COLS], size_t size, size_t row)
{
    int max = matrix[row][0];
    for (size_t i = 1; i < size; i++)
    {
        if (matrix[row][i] > max)
        {
            max = matrix[row][i];
        }
    }

    return max;
}

int findMinInCol(const int matrix[][MAX_COLS], size_t size, size_t col)
{
    int min = matrix[0][col];

    for (size_t i = 1; i < size; i++)
    {
        if (matrix[i][col] < min)
        {
            min = matrix[i][col];
        }
    }

    return min;
}

void printSaddleNumber(int num, size_t row, size_t col, size_t size)
{
    std::cout << "Saddle number: " << num << ", "
              << "position (" << row << "," << col << ")";

    bool onMain = row == col;
    bool onSecond = row == size - 1 - col;
    if (onMain)
    {
        std::cout << ", on main diagonal";
    }

    if (onSecond)
    {
        std::cout << ", on second diagonal";
    }

    if (!onSecond && !onMain)
    {
        std::cout << ", out of main and second diagonal";
    }
}

// This solution is O(n^3). It can be optimized by precomputing all row maximums and all col minimums
// knocking down the time complexity to O(n^2) and increasing the space complexity to O(n)
void printSaddleNumbers(const int matrix[][MAX_COLS], size_t size)
{
    bool found = false;

    for (size_t i = 0; i < size; i++)
    {
        int max = findMaxInRow(matrix, size, i);
        for (size_t j = 0; j < size; j++)
        {
            int min = findMinInCol(matrix, size, j);

            if (matrix[i][j] == min && matrix[i][j] == max)
            {
                printSaddleNumber(matrix[i][j], i, j, size);
                std::cout << std::endl;

                found = true;
            }
        }
    }

    if (!found)
    {
        std::cout << "No saddle numbers." << std::endl;
    }
}

int main()
{
    int matrix[MAX_COLS][MAX_COLS];
    size_t size;
    std::cin >> size;

    if (size < MIN_COLS || size > MAX_COLS)
    {
        std::cout << "Invalid size. Size must be in range [" << MIN_COLS << ";" << MAX_COLS << "]";
    }
    else
    {
        inputMatrix(matrix, size);
        transposeMatrix(matrix, size);
        printSaddleNumbers(matrix, size);
    }

    return 0;
}
