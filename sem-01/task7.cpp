// Въвежда се цяло число n - n лева.
// Да се изведе на конзолата как може да се разпределят по банкноти,
// така че да имаме минимален брой банкноти.
// В условието приемаме, че имаме банкноти от 1 и 2 лева.
#include <iostream>
int main() {
int n ;
    std::cout << "Enter the amount of money you have:"<<std::endl;
    std::cin >> n;
    int s = n/100;
    std::cout << s<<"x100lv"<<std::endl;
    int p = n%100 / 50;
    std::cout << p<<"x50lv"<<std::endl;
    int d = (n%100 - p*50) / 20;
    std::cout << d<<"x20lv"<<std::endl;
    int de = (n%100 - p*50 - d*20) / 10;
    std::cout << de<<"x10lv"<<std::endl;
    int pe =  (n%100 - p*50 - d*20 - de*10) / 5;
    std::cout << pe<<"x5lv"<<std::endl;
    int dv = (n%100 - p*50 - d*20 - de*10 - pe*5) / 2;
    std::cout << dv<<"x2lv"<<std::endl;
    int e = n%100 - p*50 - d*20 - de*10 - pe*5 - dv*2 ;
    std::cout << e<<"x1lv"<<std::endl;
    return 0;
}