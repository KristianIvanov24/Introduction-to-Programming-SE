#include <iostream>


int main () {
    int number;
    std::cin >> number;

    int maxCount = 0, maxDigit = 9;

    for (int digit = 0; digit <= 9; digit++)
    {
        int count = 0;

        for (int i = 1; i < number; i *= 10)
        {
            if (digit == (number / i) % 10)
                count++;
        }

        if (maxCount < count)
        {
            maxCount = count;
            maxDigit = digit;
        }
        else if (maxCount == count)
            maxDigit = (digit < maxDigit ? digit : maxDigit);
    }

    std::cout << maxDigit << std::endl;

    return 0;
}