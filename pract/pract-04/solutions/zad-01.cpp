#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n < 0) {
        std::cout << "Invalid number!" << std::endl;
        return 0;
    }

    if (n == 0) {
        std::cout << 0 << std::endl;
        return 0;
    }

    if (n == 1) {
        std::cout << 1 << std::endl;
        return 0;
    }

    int prev1 = 0, prev2 = 1, current;

    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }

    std::cout << current << std::endl;

    return 0;
}
