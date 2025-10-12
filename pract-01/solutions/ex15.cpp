// 15. Напишете програма, при която се въвежда цяло четирицифрено число. Програмата да отпечата 1 ако то е палиндром и 0 ако не е.
#include <iostream>

int main () {
    int number; std::cin>>number;
    int firstDigit = number / 1000;
    int secondDigit = (number %= 1000) / 100;
    int thirdDigit = (number %= 100) / 10;
    number %= 10;
    std::cout<<(firstDigit == number && secondDigit == thirdDigit)<<std::endl;

    return 0;
}