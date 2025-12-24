#include <iostream>

const size_t SIZE = 1000;

void inputArray(int arr[], size_t size) {
	for(int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
}

int countInversions(int arr[], size_t size) {

	int inversions = 0;

	for(int i = 0; i < size - 1; i++) {
		for(int j = i + 1; j < size; j++) {
			if(arr[i] > arr[j]) {
				inversions++;
			}
		}
	}

	return inversions;
}

int main()
{
    int n;
	int arr[SIZE];

	std::cin >> n;

	if(n < 1 || n > SIZE) {
		std::cout << "Invalid size";
		return 0;
	}
	
	inputArray(arr, n);
	
	std::cout << countInversions(arr, n);
	
	return 0;
}