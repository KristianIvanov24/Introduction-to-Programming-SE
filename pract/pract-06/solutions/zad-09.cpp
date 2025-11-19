#include <iostream>

const size_t CAPACITY = 1024;

void getLongestRepeatingSubarray(const int arr[], size_t size, size_t& longestLen, int& longestNum)
{
    if (size == 0)
    {
        longestLen = 0;
        return;
    }

    longestLen = 1;
    longestNum = arr[0];

    size_t currLen = 1;
    int currNum = arr[0];
    for (size_t i = 1; i < size; i++)
    {
        if (arr[i] == currNum)
        {
            currLen++;
        }
        else
        {
            currLen = 1;
            currNum = arr[i];
        }

        if (currLen > longestLen)
        {
            longestNum = currNum;
            longestLen = currLen;
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

    size_t len;
    int num;
    getLongestRepeatingSubarray(arr, size, len, num);

    std::cout << len << " " << num;
}