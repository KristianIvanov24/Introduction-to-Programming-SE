// 6. Напишете програма, при която се въвежда двуцифрено число. Да се намери произведението на цифрите му.
#include <iostream>

int main () {
    int number; std::cin>>number;
    int firstDigit = number / 10;
    int secondDigit = number % 10;
    std::cout<<firstDigit * secondDigit<<std::endl; 

    return 0;
}