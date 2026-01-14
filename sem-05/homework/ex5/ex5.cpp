#include <iostream>

const size_t SIZE = 1000;

void inputArray(int arr[], size_t size) {
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
}

bool checkForTwoZeroesInARow(int arr[], size_t size) {

	for (int i = 0; i < size - 1; i++) {
		if (arr[i] == 0 && arr[i + 1] == 0) {
			return true;
		}
	}

	return false;
}

int main()
{
	int n;
	int arr[SIZE];

	std::cin >> n;

	if (n < 1 || n > SIZE) {
		std::cout << "Invalid size";
		return 0;
	}

	inputArray(arr, n);

	std::cout << (checkForTwoZeroesInARow(arr, n) ? "Yes" : "No");

    return 0;
}