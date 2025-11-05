#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n < 0) {
        std::cout << "Invalid input!";
        return 0;
    }

    bool first = true;

    for (int i = 2; i <= n; i++) {
        bool prime = true;
        int end = sqrt(i);
        for (int j = 2; j <= end; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            if (!first) std::cout << ", ";
            std::cout << i;
            first = false;
        }
    }


    return 0;
}
