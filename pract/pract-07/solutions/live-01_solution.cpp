#include <iostream>

const int MAX_ARRAY_CAPACITY = 1024;

bool readInput(int nums[], int& size, int& target)
{
    std::cin >> size >> target;

    if (size <= 0 || size > MAX_ARRAY_CAPACITY)
        return false;

    for (int i = 0; i < size; i++)
        std::cin >> nums[i];

    return true;
}

bool isRotatedSorted(int nums[], size_t size)
{
    int breaks = 0;

    for (int i = 1; i < size; i++) {
        if (nums[i - 1] >= nums[i])
            breaks++;
    }

    return breaks == 0 || (breaks == 1 && nums[size - 1] < nums[0]);
}

int findIndexInRotatedSorted(int nums[], size_t size, int target)
{
    size_t left = 0;
    size_t right = size - 1;

    while (left <= right) {
        size_t mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[left] <= nums[mid]) {
            if (nums[left] <= target && target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        else {
            if (nums[mid] < target && target <= nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int nums[MAX_ARRAY_CAPACITY];
    int n, k;

    if (!readInput(nums, n, k)) {
        std::cout << "Invalid input data!\n";
        return 1;
    }

    if (!isRotatedSorted(nums, n)) {
        std::cout << "Invalid rotated sorted array!\n";
        return 1;
    }

    std::cout << findIndexInRotatedSorted(nums, n, k) << '\n';

    return 0;
}