#include <iostream>

int countDigitsInNumber(int num)
{
    if (num == 0)
        return 1;

    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }

    return count;
}

int getDigitByPosition(int n, int k) {

	int digits = countDigitsInNumber(n);

    if(k > digits)
        return -1;

    for (int i = 0; i < digits - k; i++) {
        n /= 10;
    }

	return n % 10;
}

int main()
{
	int n, k;
	std::cin >> n >> k;
	if (k < 1) {
		std::cout << "Invalid input";
		return 0;
	}

	int digit = getDigitByPosition(n, k);

    if(digit == -1)
        std::cout << "Invalid input";
    else
		std::cout << digit;

    return 0;
}

