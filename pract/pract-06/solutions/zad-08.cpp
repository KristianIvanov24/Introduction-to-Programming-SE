#include <iostream>

const size_t CAPACITY = 1024;

long long getSumArr(const int arr[], size_t size)
{
    long long sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

bool canBePartitioned(const int arr[], size_t size)
{
    long long leftSum = 0;
    long long rightSum = getSumArr(arr, size);

    for (size_t i = 0; i < size; i++)
    {
        leftSum += arr[i];
        rightSum -= arr[i];

        if (leftSum == rightSum)
        {
            return true;
        }
    }

    return false;
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

    std::cout << canBePartitioned(arr, size);
}