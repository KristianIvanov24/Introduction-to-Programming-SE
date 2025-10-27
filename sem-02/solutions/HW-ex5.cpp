#include <iostream>

/*
Задача 5 : Да се напише програма, която по зададен месец и година, въведени от клавиатурата, определя броя на дните в този месец.

Вход: 5 2007, Изход: 31

Вход: 2 2004, Изход: 29

Вход: 2 2006, Изход: 28
*/

int main()
{
    int month, year;
    std::cin >> month >> year;
    
    switch(month)
    {
        case 1: 
        case 3: 
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: std::cout << "31" << std::endl; break;
        case 4:
        case 6:
        case 9:
        case 11: std::cout << "30" << std::endl; break;
        case 2: std::cout << (year % 4 == 0 ? "29" : "28") << std::endl; break;
        default: std::cout << "Incorrect month!" << std::endl; break;
    }

    return 0;
}
