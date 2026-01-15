#include <iostream>


void swap(int& el1, int& el2) {
    int temp = el1;
    el1 = el2;
    el2 = temp;
}


void insertionSort(int* arr, size_t size) {
    if (!arr) {
        return;
    }
    for (size_t i = 1; i < size; i++)
    {
        int key = arr[i];
        int indx = i - 1;
        while (indx >= 0 && arr[indx] > key) {
            arr[indx + 1] = arr[indx];
            indx--;
        }
        
        arr[indx + 1] = key;
    }
    
}

int main() {
    int arr[10] = {3, 7, 11, 4, 15, 3, 4, 6, 9, 7};

    insertionSort(arr, 10);

    for(int i = 0 ; i < 10; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}