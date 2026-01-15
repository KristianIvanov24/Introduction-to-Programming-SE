#include <iostream>

// база : базови случаи (рекурсията връща веднага)

// рекурсивна стъпка
// zad 1
int sum(int n) {
    if(n <= 0) {
        return 0;
    }

    return n + sum(n - 1);
}

// zad 2
bool contains(const int* arr, int n, int x) {
    if (n <= 0) {
        return false;
    }


    return *arr == x || contains(arr + 1, n - 1, x);
}

int main() {

}