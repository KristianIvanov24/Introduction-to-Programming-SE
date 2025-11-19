#include <iostream>

const size_t CAPACITY = 1024;
const size_t DIGITS_SIZE = 10;

bool isFilledWith(const int arr[], size_t size, int with)
{
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] != with)
        {
            return false;
        }
    }

    return true;
}

bool arrIsPermutationOf(const int arr[], size_t size, const int of[], size_t ofSize)
{
    if (size != ofSize)
    {
        return false;
    }

    int digits[DIGITS_SIZE]{0};

    for (size_t i = 0; i < size; i++)
    {
        digits[arr[i]]++;
        digits[of[i]]--;
    }

    return isFilledWith(digits, DIGITS_SIZE, 0);
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

    int of[CAPACITY];
    size_t ofSize = 0;
    input(of, ofSize);

    std::cout << arrIsPermutationOf(arr, size, of, ofSize);
}