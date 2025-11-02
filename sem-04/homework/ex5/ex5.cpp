#include <iostream>

int getSmallestDigitInNumber(int num)
{
    int smallestDigit = 9;
    while (num > 0) {
        int currentDigit = num % 10;
        if (currentDigit < smallestDigit) {
            smallestDigit = currentDigit;
        }
        num /= 10;
    }
    return smallestDigit;
}

int removeDigitFromNumber(int num, int digitToRemove)
{
    int result = 0;
    int multiplier = 1;
    bool removed = false;

    while (num > 0) {
        int currentDigit = num % 10;
        num /= 10;

        if (currentDigit == digitToRemove && !removed) {
            removed = true;
            continue;
        }

        result += currentDigit * multiplier;
        multiplier *= 10;
    }

    return result;
}

int getNumberWithSortedDigits(int num)
{
	int numWithSortedDigits = 0;
    while(num > 0) {
		int smallestDigitInNumber = getSmallestDigitInNumber(num);
		numWithSortedDigits = numWithSortedDigits * 10 + smallestDigitInNumber;

		num = removeDigitFromNumber(num, smallestDigitInNumber);
	}

	return numWithSortedDigits;
}

int main()
{
    int num;
	std::cin >> num;

    if(num < 0) {
        std::cout << "Invalid input";
        return 0;
	}

	std::cout << getNumberWithSortedDigits(num);

    return 0;
}