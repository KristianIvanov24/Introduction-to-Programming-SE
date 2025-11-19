#include <iostream>

const size_t CAPACITY = 1024;

bool removeAt(int arr[], size_t& size, unsigned pos)
{
    if (pos >= size)
    {
        return false;
    }

    for (size_t i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    return true;
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

    bool successful = removeAt(arr, size, 0);

    if (successful)
    {
        print(arr, size);
    }
    else
    {
        std::cout << "Error while removing!";
    }
}