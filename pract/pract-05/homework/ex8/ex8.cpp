#include <iostream>

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

bool isStrong(int n) {
	n = abs(n);

	int originalN = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
		int factorialValue = factorial(digit);

        if (factorialValue > originalN)
            return false;

		sum += factorialValue;
        n /= 10;
	}

	return sum == originalN;
}

int main()
{
    int num;
	std::cin >> num;

	std::cout << isStrong(num);

    return 0;
}
