// Задача 1: Въвежда се цяло число. Отпечатайте 1, ако числото е четно и 0, ако е нечетно.
#include <iostream>

int main () {
    int number; std::cin>>number;
    std::cout<<(number % 2 + 1) % 2<<std::endl;

    return 0;
}