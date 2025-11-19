#include <iostream>

const size_t CAPACITY = 1024;

void swap(int& a, int& b)
{
    a += b;
    b = a - b;
    a -= b;
}

void reverseFirstK(int arr[], size_t size, unsigned k)
{
    if (k <= 1)
    {
        return;
    }

    if (k > size)
    {
        k = size;
    }

    unsigned end = k / 2;
    for (size_t i = 0; i < end; i++)
    {
        swap(arr[i], arr[k - i - 1]);
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

    reverseFirstK(arr, size, 3);

    print(arr, size);
}