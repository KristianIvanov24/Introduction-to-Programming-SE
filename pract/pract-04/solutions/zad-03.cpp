#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n <= 0 || n > 20) {
        std::cout << "Invalid number!";
        return 0;
    }

    int sum = 0, fact = 1;

    for (int i = 1; i <= n; i++) {
        sum += i;
        fact *= i;
    }

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Factorial: " << fact << std::endl;

    return 0;
}
