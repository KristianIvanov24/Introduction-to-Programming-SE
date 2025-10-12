
#include <iostream>
int main() {
    int a , b;
    std::cout << "Vavedete 2 chisla:" << std::endl;
    std::cin >> a>>b;
    std::cout << (a+b)*(a+b)*(a+b)*(a+b) - (a-b)*(a-b) << std::endl;
    return 0;
}