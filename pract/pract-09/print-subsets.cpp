#include <iostream>

void printSubset(int arr[], size_t size, int subsetIndices)
{

    std::cout << "{";
    for (int i = 0; i < size; i++)
    {
        int mask = 1 << i;

        if (subsetIndices & mask)
        {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << "}";
}

void printSubsets(int arr[], size_t size)
{

    int total = 1 << size;

    for (size_t i = 0; i < total; i++)
    {
        printSubset(arr, size, i);
        std::cout << "\n";
    }
}

int main()
{
    size_t size = 14;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    printSubsets(arr, size);
}
