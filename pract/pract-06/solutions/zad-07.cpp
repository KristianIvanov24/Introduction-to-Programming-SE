#include <iostream>

const size_t CAPACITY = 1024;

int findZero(const int arr[], size_t size)
{
    size_t left = 0;
    size_t right = size;

    while (left < right)
    {
        size_t mid = left + (right - left) / 2;

        if (arr[mid] == 0)
        {
            return mid;
        }

        if (arr[mid] % 2 == 0)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
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

    std::cout << findZero(arr, size);
}