/*Задача 3 : Да се напише програма, която въвежда от клавиатурата трицифрено число n. Програмата да проверява 
дали цифрите му са различни. Ако са различни, да извежда "yes" и произведението от първата и третата цифра на 
числото, в протиовен случай - "no" и числото в обратен ред на цифрите му.

Вход: 369, Изход: yes 27

Вход: 223, Изход: no 322*/
#include <iostream>

int main () {
    int n;
    std::cin >> n;

    int firstDigit = n / 100;
    int secondDigit = (n % 100) / 10;
    int thirdDigit = n % 10;

    if (firstDigit == secondDigit || secondDigit == thirdDigit || firstDigit == thirdDigit)
    {
        std::cout << "no " << thirdDigit << secondDigit << firstDigit << std::endl;
    }
    else
    {
        std::cout << "yes " << firstDigit * thirdDigit << std::endl;
    }

    return 0;
}