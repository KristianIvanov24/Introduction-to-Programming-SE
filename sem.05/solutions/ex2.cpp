#include <iostream>

// Обръщане на масив

const int SIZE = 4;

void printArray(int arr[], size_t size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';

  std::cout << std::endl;
}

void swap(int& a, int& b) // helper function to swap two integers
{
    a += b;
    b = a - b;
    a -= b;
}

void reverse(int arr[], size_t size)
{
    int half = size / 2;
    for (int i = 0; i < half; i++)
        swap(arr[i], arr[size - i - 1]);
}

int main() 
{
    int arr[] = { 1, 2, 3, 4 };
    
    printArray(arr, SIZE); // before reverse
    
    reverse(arr, SIZE);
    
    printArray(arr, SIZE); // after reverse

    return 0;
}
