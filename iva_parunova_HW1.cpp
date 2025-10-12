//Задача 1: Въвежда се цяло число. Отпечатайте 1, ако числото е четно и 0, ако е нечетно.

#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    int num2 = num % 2;
    std::cout << (num2 == 0);
    return 0;
}

//Задача 2: Въвежда се трицифрено цяло число n. Да се отпечата обърнатото число събрано с единица. 

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int a = n % 10;
    int b = (n / 10) % 10;
    int c = n / 100;
    std::cout << a * 100 + b * 10 + (c + 1);
    return 0;
}

//Задача 3: Въвеждат се две числа. Да се отпечата по-голямото от двете.

#include <iostream>

int main()
{
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;
    std::cout << (a * (a > b) + b * (b > a));
    return 0;
}

/*Задача 4: Въвежа се цяло число.
Да се отпечата 1, ако числото е валидна оценка от училище, и 0, ако не е валидна. */

#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    std::cout << ((num >= 2) && (num <= 6));
    return 0;
}


//Задача 5: Въвежа се цяло число. Да се отпечата без последната цифра.

#include <iostream>

int main()
{
    int num;
    std::cin >> num;
    int num2 = (num / 10);
    std::cout << num2;
    return 0;
}

/*Задача 6: Напишете програма, която въвежда две числа - a и b и
извежда като резултат (a + b)^4 - (a-b)^2*/

#include <iostream>

int main()
{
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;
    int c = (a + b);
    int d = (a - b);
    std::cout << ((c * c * c * c) - (d * d));
    return 0;
}

/*Задача 7: Въвежда се цяло число n - n лева.
Да се изведе на конзолата как може да се разпределят по банкноти, така че
да имаме минимален брой банкноти. В условието приемаме, че имаме банкноти от 1 и 2 лева.*/

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    std::cout << "Two dollar bills " << n / 2 << " ";
    std::cout << "One dollar bills " << n % 2;
    return 0;
}
