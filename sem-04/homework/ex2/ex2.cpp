#include <iostream>

int getReversedNumber(int num)
{
    int reversedNum = 0;
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

int powerOfTenForDigits(int num) {
    int power = 1;
    while (num > 0) {
        power *= 10;
        num /= 10;
    }
    return power;
}

long long getConcatenatedNumber(int num)
{
    long long reversed = getReversedNumber(num);
    long long power = powerOfTenForDigits(num);
    return reversed * power + num;
}

int main()
{
    int num;
    std::cin >> num;

    if (num < 0) {
        std::cout << "Invalid input";
        return 0;
    }

    std::cout << getConcatenatedNumber(num);

    return 0;
}