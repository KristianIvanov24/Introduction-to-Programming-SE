#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int denoms = 2; // 1 and n

    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            denoms++;
        }
    }

    std::cout << denoms;

    return 0;
}
