#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int hundreds, fifties, twenties, fives, twos, ones;
    hundreds = n / 100;
    n %= 100;
    fifties = n / 50;
    n %= 50;
    twenties = n / 20;
    n %= 20;
    fives = n / 5;
    n %= 5;
    twos = n / 2;
    ones = n %= 2;
    std:: cout << hundreds << "x100lv. " << fifties << "x50lv. " << twenties << "x20lv. "
        << fives << "x5lv. " << twos << "x2lv. " << ones << "x1lv. ";
    return 0;
}
