#include <iostream>

const size_t CAPACITY = 1024;

void merge(const int arr1[], size_t size1, const int arr2[], size_t size2, int result[], size_t& resultSize)
{
    resultSize = size1 + size2;

    size_t resIndex = 0;
    size_t arr1Index = 0;
    size_t arr2Index = 0;

    while (arr1Index < size1 && arr2Index < size2)
    {
        if (arr1[arr1Index] <= arr2[arr2Index])
        {
            result[resIndex++] = arr1[arr1Index++];
        }
        else
        {
            result[resIndex++] = arr2[arr2Index++];
        }
    }

    while (arr1Index < size1)
    {
        result[resIndex++] = arr1[arr1Index++];
    }

    while (arr2Index < size2)
    {
        result[resIndex++] = arr2[arr2Index++];
    }
}

void input(int arr[], size_t& size)
{
    size_t n;
    std::cin >> n;

    if (n > CAPACITY)
    {
        return;
    }

    size = n;

    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

void print(const int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int result[CAPACITY];
    size_t resultSize;

    int a1[] = {1, 3, 5};
    int b1[] = {2, 4, 6};
    merge(a1, 3, b1, 3, result, resultSize);
    print(result, resultSize);

    int a2[] = {0, 2, 4, 6};
    int b2[] = {1, 3, 5, 7};
    merge(a2, 4, b2, 4, result, resultSize);
    print(result, resultSize);

    int a3[] = {1, 1, 2};
    int b3[] = {2, 3, 3};
    merge(a3, 3, b3, 3, result, resultSize);
    print(result, resultSize);

    int a4[] = {5, 10, 15};
    int b4[] = {1, 2, 3, 20};
    merge(a4, 3, b4, 4, result, resultSize);
    print(result, resultSize);

    int a5[] = {0, 0, 0};
    int b5[] = {0, 0};
    merge(a5, 3, b5, 2, result, resultSize);
    print(result, resultSize);

    int a6[] = {1, 4, 7};
    int b6[] = {2, 5, 8};
    merge(a6, 3, b6, 3, result, resultSize);
    print(result, resultSize);

    int a7[] = {10, 20};
    int b7[] = {5, 15, 25};
    merge(a7, 2, b7, 3, result, resultSize);
    print(result, resultSize);

    int a8[] = {3, 6, 9, 12};
    int b8[] = {1, 2, 4, 5};
    merge(a8, 4, b8, 4, result, resultSize);
    print(result, resultSize);

    int a9[] = {1, 2, 3, 4, 5};
    int b9[] = {6, 7, 8, 9, 10};
    merge(a9, 5, b9, 5, result, resultSize);
    print(result, resultSize);

    int a10[] = {1};
    int b10[] = {0};
    merge(a10, 1, b10, 1, result, resultSize);
    print(result, resultSize);

    return 0;
}