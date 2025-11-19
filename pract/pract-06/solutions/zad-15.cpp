#include <iostream>

bool containsPair(const int X[], const int Y[], size_t n, int a, int b)
{
    for (int i = 0; i < n; i++)
    {
        if (X[i] == a && Y[i] == b)
        {
            return true;
        }
    }
    return false;
}

bool isReflexive(const int X[], const int Y[], size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        if (!containsPair(X, Y, n, X[i], X[i]) || !containsPair(X, Y, n, Y[i], Y[i]))
            return false;
    }
    return true;
}

bool isSymmetric(const int X[], const int Y[], size_t n)
{
    for (int i = 0; i < n; i++)
    {
        if (!containsPair(X, Y, n, Y[i], X[i]))
        {
            return false;
        }
    }

    return true;
}

bool isAntisymmetric(const int X[], const int Y[], size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        if (containsPair(X, Y, n, Y[i], X[i]) && X[i] != Y[i])
            return false;
    }

    return true;
}

bool checkTransitiveFor(const int X[], const int Y[], size_t n, size_t i)
{
    for (size_t j = 0; j < n; j++)
    {
        if (Y[i] == X[j])
        {
            if (!containsPair(X, Y, n, X[i], Y[j]))
                return false;
        }
    }

    return true;
}

bool isTransitive(const int X[], const int Y[], size_t n)
{
    for (size_t i = 0; i < n; i++)
    {
        if (!checkTransitiveFor(X, Y, n, i))
            return false;
    }

    return true;
}

int main()
{
    int X[] = {1, 2, 3, 2, 3};
    int Y[] = {1, 2, 3, 3, 2};
    size_t n = 5;

    for (size_t i = 0; i < n; i++)
    {
        std::cout << "(" << X[i] << ", " << Y[i] << ") ";
    }
    std::cout << std::endl;

    std::cout << "Reflexive: " << isReflexive(X, Y, n) << std::endl;
    std::cout << "Symmetric: " << isSymmetric(X, Y, n) << std::endl;
    std::cout << "Antisymmetric: " << isAntisymmetric(X, Y, n) << std::endl;
    std::cout << "Transitive: " << isTransitive(X, Y, n) << std::endl;

    return 0;
}
