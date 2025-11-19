#include <iostream>

const size_t CAPACITY = 1024;

bool insertAt(int arr[], size_t& size, unsigned pos, int toAdd)
{
    if (size >= CAPACITY || pos > size)
    {
        return false;
    }

    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = toAdd;
    size++;

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

    bool successful = insertAt(arr, size, 5, -1);

    if (successful)
    {
        print(arr, size);
    }
    else
    {
        std::cout << "Error while inserting!";
    }
}