// Задача 3: Въвеждат се две числа. Да се отпечата по-голямото от двете.
#include <iostream>

int main () {
    int a, b; std::cin>>a>>b;
    std::cout<<(a + b + abs(a - b)) * 0.5<<std::endl;

    return 0;
}