// Задача 2: Въвежда се трицифрено цяло число n. Да се отпечата обърнатото число събрано с единица.
#include <iostream>

int main () {
    int n; std::cin>>n;
    int firstDigit = n / 100 + 1;
    int secondDigit = (n %= 100) / 10;
    int thirdDigit = n % 10;

    std::cout<<thirdDigit<<secondDigit<<firstDigit<<std::endl;

    return 0;
}