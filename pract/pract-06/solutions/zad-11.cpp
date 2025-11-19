#include <iostream>

bool check(const int first[], size_t sizeOfFirst, const int second[], size_t sizeOfSecond, size_t offset)
{
    for (int i = 0; i < sizeOfSecond; i++)
    {
        if (first[i + offset] != second[i])
        {
            return false;
        }
    }
    return true;
}

bool isSubarray(const int first[], size_t sizeOfFirst, const int second[], size_t sizeOfSecond)
{
    if (sizeOfFirst < sizeOfSecond)
    {
        return false;
    }

    for (int i = 0; i <= sizeOfFirst - sizeOfSecond; i++)
    {
        if (check(first, sizeOfFirst, second, sizeOfSecond, i))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[3] = {3, 4, 5};
    std::cout << isSubarray(arr, 5, arr2, 3);
}
