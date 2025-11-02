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

int main()
{
    int num;
    std::cin >> num;

    if (num < 0) {
        std::cout << "Invalid input";
        return 0;
    }

	std::cout << getReversedNumber(num);

    return 0;
}