#include <iostream>

int main() {
	int n;
	std::cin >> n;

	// 1234 % 10 = 4 / 10 = 0
	// 1234 / 10 = 123
	// 0 + 4 = 4 * 10 = 43 * 10 = 430 + 2 = 432 ...
	int result = 0;
	int copy = n;

	while (n > 0) {
		result *= 10;

		result += n % 10;

		n /= 10;
	}

	if (result == copy) {
		std::cout << "true";
	}
	else {
		std::cout << "false";
	}
}