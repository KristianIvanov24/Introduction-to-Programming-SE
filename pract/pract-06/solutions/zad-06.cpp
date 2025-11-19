#include <iostream>

const size_t CAPACITY = 1024;

void removeNegatives(int arr[], size_t& size)
{
    size_t newSize = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            arr[newSize++] = arr[i];
        }
    }

    size = newSize;
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
}

int main()
{
    int arr[CAPACITY];
    size_t size = 0;
    input(arr, size);

    removeNegatives(arr, size);

    print(arr, size);
}