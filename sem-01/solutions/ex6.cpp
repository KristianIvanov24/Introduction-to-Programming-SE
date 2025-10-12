// Задача 6: Напишете програма, която въвежда две числа - a и b и извежда като резултат (a + b)^4 - (a-b)^2
#include <iostream>

int main () {
    int a, b; std::cin>>a>>b;
    std::cout<<(a + b) * (a + b) * (a + b) * (a + b) - (a - b) * (a - b)<<std::endl;

    return 0;
}