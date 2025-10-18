#include <iostream>

int main()
{
	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;

	int maxEven = 0;
	int minOdd = 0;

	if (num1 % 2 == 0 && (num1 > maxEven || maxEven == 0)) {
		maxEven = num1;
	}
	else if (num1 % 2 != 0 && (num1 < minOdd || minOdd == 0)) {
		minOdd = num1;
	}

	if (num2 % 2 == 0 && (num2 > maxEven || maxEven == 0)) {
		maxEven = num2;
	}
	else if (num2 % 2 != 0 && (num2 < minOdd || minOdd == 0)) {
		minOdd = num2;
	}

	if (num3 % 2 == 0 && (num3 > maxEven || maxEven == 0)) {
		maxEven = num3;
	}
	else if (num3 % 2 != 0 && (num3 < minOdd || minOdd == 0)) {
		minOdd = num3;
	}

	if (maxEven != 0 && minOdd != 0) {
		std::cout << maxEven - minOdd << std::endl;
	}
	else if (maxEven == 0) {
		std::cout << minOdd << std::endl;
	}
	else {
		std::cout << maxEven << std::endl;
	}

	return 0;
}