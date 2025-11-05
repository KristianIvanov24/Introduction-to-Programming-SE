#include <iostream>

int main() {
    unsigned n;
    std::cin >> n;

    unsigned sumDigits = 0;

    while(n > 0) {
        sumDigits += n % 10;
        n /= 10;
    }

    std::cout << sumDigits;
    return 0;
}
