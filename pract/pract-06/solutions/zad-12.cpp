#include <iostream>

const size_t CAPACITY = 1024;

void printArrFromTo(const int arr[], size_t from, size_t to)
{
    for (size_t i = from; i < to; i++)
    {
        std::cout << arr[i] << " ";
    }
}

void printSubarrays(const int arr[], size_t size, int k)
{
    if (k <= 0 || k > size)
    {
        return;
    }

    for (size_t i = 0; i <= size - k; i++)
    {
        printArrFromTo(arr, i, i + k);
        std::cout << std::endl;
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
}

int main()
{
    int arr[CAPACITY];
    size_t size = 0;
    input(arr, size);

    printSubarrays(arr, size, 4);
}