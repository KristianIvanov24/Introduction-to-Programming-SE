#include <iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int* arr, size_t size) {
    if(!arr) 
        return;
    
    for(size_t i = 0; i < size - 1; i++) {
        int minElIndex = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[minElIndex]) {
                minElIndex = j;
            }
        }
        if (minElIndex != i) {
            swap(arr[i], arr[minElIndex]);
        }
    }
}

int main() {
    int arr[10] = {3, 7, 11, 4, 15, 3, 4, 6, 9, 7};

    selectionSort(arr, 10);

    for(int i = 0 ; i < 10; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}