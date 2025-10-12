// 8. Напишете програма, при която се въвежда трицифрено цяло число. Програмата да изчисли и отпечата сбора на цифрите му.
#include <iostream>

int main () {
    int number; std::cin>>number;
    int firstDigit = number / 100;
    int secondDigit = (number % 100) / 10;
    int thirdDigit = number % 10;
    std::cout<<firstDigit+secondDigit+thirdDigit<<std::endl;

    return 0;
}