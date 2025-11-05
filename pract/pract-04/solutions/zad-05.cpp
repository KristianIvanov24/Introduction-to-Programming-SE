#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    int input;
    int partialSum = 0;
    for(int i = 1; i < n; i++) {
        std::cin >> input;
        partialSum += input;
    }

    int missing = sum - partialSum;
    std::cout << missing;
    return 0;
}
