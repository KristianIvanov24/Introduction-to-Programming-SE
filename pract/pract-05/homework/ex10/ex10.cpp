#include <iostream>

int getKLastDigits(int num, int k) {

    int powerOfTen = 1;
    for (int i = 0; i < k; i++) {
        powerOfTen *= 10;
    }

    return num % powerOfTen;
}

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

int addDigitsInTheBeginingOfNumber(int num, int digitsToAdd) {

    int k = countDigitsInNumber(num);

    int powerOfTen = 1;
    for (int i = 0; i < k; i++) {
        powerOfTen *= 10;
    }

    return digitsToAdd * powerOfTen + num;
}

int main()
{
    int a, b, k;
	std::cin >> a >> b >> k;

    if (k < 1) {
		std::cout << "Invalid input";
        return 0;
    }

	std::cout << addDigitsInTheBeginingOfNumber(b, getKLastDigits(a, k));

    return 0;
}