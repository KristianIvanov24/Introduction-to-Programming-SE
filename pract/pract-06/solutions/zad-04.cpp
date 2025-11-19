#include <iostream>

const size_t CAPACITY = 1024;

double getMedian(const int arr[], size_t size)
{
    if (size == 0)
    {
        return 0;
    }

    int mid = size / 2;
    if (size % 2 == 0)
    {
        return (arr[mid] + arr[mid - 1]) / 2.0;
    }

    return arr[mid];
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

    std::cout << getMedian(arr, size);
}