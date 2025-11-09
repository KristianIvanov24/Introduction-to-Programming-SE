#include <iostream>

int getSmallestDigitInNumber(int num)
{
    if (num == 0) return 0;

    int smallestDigit = 9;
    while (num > 0) {
        int currentDigit = num % 10;
        if (currentDigit < smallestDigit)
            smallestDigit = currentDigit;

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

bool permutationNumbers(int a, int b) {

	a = abs(a);
	b = abs(b);

    if(countDigitsInNumber(a) != countDigitsInNumber(b))
        return false;

	int numLength = countDigitsInNumber(a);

    for(int i = 0; i < numLength; i++) {
        int smallestDigitA = getSmallestDigitInNumber(a);
        int smallestDigitB = getSmallestDigitInNumber(b);

        if(smallestDigitA != smallestDigitB)
            return false;

        a = removeDigitFromNumber(a, smallestDigitA);
        b = removeDigitFromNumber(b, smallestDigitB);
    }
	return true;
}

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	std::cout << permutationNumbers(num1, num2);

    return 0;
}
