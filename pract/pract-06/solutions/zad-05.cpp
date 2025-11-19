#include <iostream>

const size_t CAPACITY = 1024;

void getMinAndMax(int arr[], size_t size, int& min, int& max)
{
    if (size == 0)
    {
        return;
    }

    min = max = arr[0];
    for (size_t i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
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

    int min;
    int max;
    getMinAndMax(arr, size, min, max);

    std::cout << min << " " << max << " ";
}