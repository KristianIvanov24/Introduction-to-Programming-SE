#include <iostream>

bool areDigitsSorted(int num) {
	bool ascending = true;
	bool descending = true;

	int previousDigit = num % 10;
	num /= 10;

    while (num > 0) {
        int currentDigit = num % 10;
        if (currentDigit < previousDigit) {
            ascending = false;
        }
        if (currentDigit > previousDigit) {
            descending = false;
        }

        if(!ascending && !descending) {
            return false;
		}

        previousDigit = currentDigit;
        num /= 10;
	}

	return true;
}

int main()
{
    int num;
    std::cin >> num;

    if (num < 0) {
        std::cout << "Invalid input";
		return 0;
    }

	std::cout << areDigitsSorted(num);

    return 0;
}