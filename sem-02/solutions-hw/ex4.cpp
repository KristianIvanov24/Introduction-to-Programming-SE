/*Задача 4 : Да се напише програма, която въвежда от клавиатурата три цели числа, различни от нула. 
Програмата да извежда разликата между максималното четно и минималното нечетно число от тях. Ако въведените 
числа са само нечетни, да извежда миниланото от тях. Ако са сано четни - максималното от тях.

Вход: -36 54 11, Изход: 43

Вход: 13 -19 337, Изход: -19

Вход: 12 -58 -14, Изход: 12*/
#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a > b) {
        a += b;
        b = a - b;
        a -= b;
    }

    if (b > c) {
        b += c;
        c = b - c;
        b -= c;
    }

    if (a > b) {
        a += b;
        b = a - b;
        a -= b;
    }

    int maxEven = 0, minOdd = 0;
    if (c % 2)
        minOdd = c;
    if (b % 2)
        minOdd = b;
    if (a % 2)
        minOdd = a;

    if (a % 2 == 0)
        maxEven = a;
    if (b % 2 == 0)
        maxEven = b;
    if (c % 2 == 0)
        maxEven = c;

    if (maxEven == 0 || minOdd == 0)
        std::cout << (maxEven == 0 ? minOdd : maxEven) << std::endl;
    else
        std::cout << maxEven - minOdd << std::endl;

    return 0;
}