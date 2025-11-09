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

int powerOfTenForDigits(int num) {

    int power = 1;

    for (int i = 0; i < num; i++) {
        power *= 10;
    }

    return power;
}

bool isInfix(int n, int k) {

    if (k == 0) {
        int temp = n;

        if (temp == 0) 
            return true;

        while (temp > 0) {
            if (temp % 10 == 0)
                return true;

            temp /= 10;
        }
        return false;
    }

    int tempN = n;

	int digitsK = countDigitsInNumber(k);

	int powerOfTen = powerOfTenForDigits(digitsK);

    while (tempN > 0) {

        if (tempN % powerOfTen == k)
            return true;

        tempN /= 10;
    }
    return false;
}

int main()
{
    int n, k;
	std::cin >> n >> k;

    if (n < 0 || k < 0) {
        std::cout << "Invalid input";
        return 0;
    }

	std::cout << isInfix(n, k);

    return 0;
}