#include <iostream>

bool contains(const int arr[], size_t size, int value)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == value)
            return true;
    }
    return false;
}

void setUnion(const int A[], size_t sizeA,
              const int B[], size_t sizeB,
              int result[], size_t &resultSize)
{
    size_t sizeR = 0;

    for (size_t i = 0; i < sizeA; i++)
    {
        result[sizeR++] = A[i];
    }

    for (size_t i = 0; i < sizeB; i++)
    {
        if (!contains(A, sizeA, B[i]))
        {
            result[sizeR++] = B[i];
        }
    }

    resultSize = sizeR;
}

void setIntersection(const int A[], size_t sizeA,
                     const int B[], size_t sizeB,
                     int result[], size_t &resultSize)
{
    size_t sizeR = 0;

    for (size_t i = 0; i < sizeA; i++)
    {
        if (contains(B, sizeB, A[i]))
        {
            result[sizeR++] = A[i];
        }
    }

    resultSize = sizeR;
}

void setDifference(const int A[], size_t sizeA,
                   const int B[], size_t sizeB,
                   int result[], size_t &resultSize)
{
    size_t sizeR = 0;

    for (size_t i = 0; i < sizeA; i++)
    {
        if (!contains(B, sizeB, A[i]))
        {
            result[sizeR++] = A[i];
        }
    }

    resultSize = sizeR;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {3, 4, 5, 6, 7};

    int result[20];
    size_t resultSize = 0;

    setUnion(A, 5, B, 5, result, resultSize);
    std::cout << "Union: ";
    for (size_t i = 0; i < resultSize; i++)
        std::cout << result[i] << " ";
    std::cout << std::endl;

    setIntersection(A, 5, B, 5, result, resultSize);
    std::cout << "Intersection: ";
    for (size_t i = 0; i < resultSize; i++)
        std::cout << result[i] << " ";
    std::cout << std::endl;

    setDifference(A, 5, B, 5, result, resultSize);
    std::cout << "Difference A\\B: ";
    for (size_t i = 0; i < resultSize; i++)
        std::cout << result[i] << " ";
    std::cout << std::endl;
}
