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

    bool aIsEven = a % 2 ? 0 : 1;
    bool bIsEven = b % 2 ? 0 : 1;
    bool cIsEven = c % 2 ? 0 : 1;

    int maxEven = INT_MIN, minOdd = INT_MAX;

    if (aIsEven)
        maxEven = a;
    else
        minOdd = a;

    if (bIsEven)
        maxEven = b > maxEven ? b : maxEven;
    else
        minOdd = b < minOdd ? b : minOdd;

    if (cIsEven)
        maxEven = c > maxEven ? c : maxEven;
    else
        minOdd = c < minOdd ? c : minOdd;

    if (maxEven == INT_MIN || minOdd == INT_MAX)
        std::cout << (maxEven == INT_MIN ? minOdd : maxEven) << std::endl;
    else
        std::cout << maxEven - minOdd << std::endl;

    return 0;
}