#include <iostream>

const size_t N = 20;

void inputMatrix(unsigned matrix[][N], size_t rows, size_t cols)
{
    for (size_t i = 0; i < rows; i++)
        for (size_t j = 0; j < cols; j++)
            std::cin >> matrix[i][j];
}

bool isPrime(unsigned n)
{
    if (n < 2)
        return false;

    unsigned root = std::sqrt(n);
    for (unsigned i = 2; i <= root; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

bool hasPrimeAboveMainDiagonal(const unsigned matrix[][N], size_t m, size_t n)
{
    for (size_t i = 0; i < m; i++)
        for (size_t j = i + 1; j < n; j++)
            if (isPrime(matrix[i][j]))
                return true;

    return false;
}

int main()
{
    unsigned matrix[N][N];

    size_t m, n;
    std::cin >> m >> n;

    if (m > N || n > N)
    {
        std::cout << "Both dimensions must be <= " << N;
        return 1;
    }

    inputMatrix(matrix, m, n);

    if (hasPrimeAboveMainDiagonal(matrix, m, n))
        std::cout << "There is a prime number above the main diagonal.";
    else
        std::cout << "No prime numbers above the main diagonal.";
}
