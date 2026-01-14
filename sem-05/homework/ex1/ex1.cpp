#include <iostream>

const size_t SIZE = 6;

bool isPalindrom(int arr[], size_t size) {

	int halfSize = size / 2;
    for(int i = 0; i < halfSize; i++) {
        if(arr[i] != arr[size - 1 - i]) {
            return false;
        }
	}

	return true;
}

int main()
{

	int arr[SIZE] = { 1, 2, 3, 3, 2, 1};

    std::cout << isPalindrom(arr, SIZE);

    return 0;
}