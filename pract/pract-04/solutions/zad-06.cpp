#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;

    if(k < 1 || k > 9) {
        std::cout << "Invalid value of k";
        return 0;
    }

    int sum = 0;
    int curr = 0;

    for (int i = 1; i <= n; i++) {
        curr = curr * 10 + k;
        sum += curr;
    }

    std::cout << sum;

    return 0;
}
