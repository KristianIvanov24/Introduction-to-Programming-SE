#include <iostream>

const size_t SIZE = 1000;

void inputArray(int arr[], size_t size) {
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
}

bool isPrime(int num) {
	if (num <= 1) 
		return false;

	int sqrtNum = sqrt(num);
	for (int i = 2; i <= sqrtNum; i++) {

		if (num % i == 0) 
			return false;
	}

	return true;
}

void printPrimesInArray(int arr[], size_t size) {

	for (int i = 0; i < size; i++) {

		if (isPrime(arr[i])) {
			std::cout << arr[i] << " ";
		}
	}

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

	printPrimesInArray(arr, n);

    return 0;
}