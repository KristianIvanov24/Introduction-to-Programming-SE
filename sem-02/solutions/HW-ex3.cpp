#include <iostream>

/*
Задача 3 : Да се напише програма, която въвежда от клавиатурата трицифрено число n. 
Програмата да проверява дали цифрите му са различни. Ако са различни, да извежда "yes" и 
произведението от първата и третата цифра на числото, в протиовен случай - "no" и числото в обратен ред на цифрите му.

Вход: 369, Изход: yes 27

Вход: 223, Изход: no 322
*/

int main()
{
    int n;
    std::cin >> n;
    
    int ones, tens, hundreds;
    
    ones = n % 10;
    n /= 10;
    
    tens = n % 10;
    n /= 10;
    
    hundreds = n % 10;
    
    if(ones != tens && tens != hundreds && ones != hundreds)
    {
        std::cout << "yes " << ones * hundreds << std::endl;
    }
    else
    {
        std::cout << "no " << ones << tens << hundreds << std::endl;
    }
    
    return 0;
}
