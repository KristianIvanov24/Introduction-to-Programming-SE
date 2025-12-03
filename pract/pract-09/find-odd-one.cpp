#include <iostream>

int findOddOne(const int arr[], size_t size)
{
    int res = 0;

    for (int i = 0; i < size; i++)
    {
        res ^= arr[i];
    }

    return res;
}

int main()
{
    int arr[9] = {1, 1, 10, 4, 4, 4, 12, 10, 12};

    std::cout << findOddOne(arr, 9);
}
