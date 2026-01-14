#include <iostream>

const size_t SIZE = 1000;

void inputArray(int arr[], size_t size) {
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
}

int sumOfDigits(int number) {

	int sum = 0;
	while (number != 0) {
		sum += number % 10;
		number /= 10;
	}

	return sum;
}

int module(int x) {
	return (x < 0) ? -x : x;
}

int countNumbersWithSumOfDigitsGreaterThanTen(int arr[], size_t size) {
	int count = 0;
	for (int i = 0; i < size; i++) {

		if (sumOfDigits(module(arr[i])) > 10) {
			count++;
		}

	}
	return count;
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

	std::cout << countNumbersWithSumOfDigitsGreaterThanTen(arr, n);

    return 0;
}