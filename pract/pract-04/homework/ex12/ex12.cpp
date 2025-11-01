#include <iostream>

int main()
{
	int n, k;
	std::cin >> n >> k;

	if (n < 1 || k < 1) {
		std::cout << "Invalid input";
		return 0;
	}


	std::cout << "Intersection(A, B) = { ";

	bool first = true;
	for (int i = 1; i <= n; i++) {

		bool isInA = (i % k == 0);
		if (!isInA) continue;


		int iCopy = i, sumOfDigits = 0;

		while (iCopy > 0) {
			sumOfDigits += iCopy % 10;
			iCopy /= 10;
		}

		if (sumOfDigits == k) {
			if(!first) {
				std::cout << ", ";
			}
			std::cout << i;
			first = false;
		}
	}

	std::cout << " }";

	return 0;
}