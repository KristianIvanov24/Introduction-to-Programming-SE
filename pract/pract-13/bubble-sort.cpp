#include <iostream>

void swap(int& el1, int& el2) {
    int temp = el1;
    el1 = el2;
    el2 = temp;
}

void bubbleSort(int* arr, size_t size) {
    if (!arr) {
        return;
    }

    for (size_t i = 0; i < size - 1; i++)
    {
        bool hasSwapped = false;
        for (size_t j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                hasSwapped = true;
            }
    
        }
        
        if (!hasSwapped) {
            break;
        }

    }
    
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};

    bubbleSort(arr, 10);

    for(int i = 0 ; i < 10; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}