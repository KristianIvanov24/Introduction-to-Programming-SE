// Задача 7: Въвежда се цяло число n - n лева. Да се изведе на конзолата как може да се разпределят по 
// банкноти, така че да имаме минимален брой банкноти. В условието приемаме, че имаме банкноти от 1 и 2 лева.
#include <iostream>

int main () {
    int n; std::cin>>n;
    int oneHundred = n / 100;
    int fifty = (n %= 100) / 50;
    int twenty = (n %= 50) / 20;
    int ten = (n %= 20) / 10;
    int five = (n %= 10) / 5;
    int two = (n %= 5) / 2;
    int one = n %= 2;

    std::cout<<oneHundred<<"x100lv "<<fifty<<"x50lv "<<twenty<<"x20lv "<<ten<<"x10lv "<<five<<"x5lv "<<two<<"x2lv "<<one<<"x1lv\n";

    return 0;
}

