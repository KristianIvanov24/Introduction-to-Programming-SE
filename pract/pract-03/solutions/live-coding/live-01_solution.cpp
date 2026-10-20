#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int original = n;
    int reversed = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n /= 10;
    }

    if (original == reversed) {
        std::cout << original << " is a palindrome!" << std::endl;
    }
    else {
        std::cout << original << " isn't a palindrome!" << std::endl;
    }

    return 0;
}