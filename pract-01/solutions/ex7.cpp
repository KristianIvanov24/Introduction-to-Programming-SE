// 7. Напишете програма, при която се въвежда трицифрено цяло число. Програмата да отпечата цифрите му разменени.
#include <iostream>

int main () {
    int number; std::cin>>number;
    int firstDigit = number / 100;
    int secondDigit = (number % 100) / 10;
    int thirdDigit = number % 10;
    std::cout<<thirdDigit<<secondDigit<<firstDigit<<std::endl;

    return 0;
}