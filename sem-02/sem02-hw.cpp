/*Задача 1 (Време + 15 минути) : Да се напише програма, която въвежда час и минути от 24 - часово денонощие
и изчислява колко ще е часът след 15 минути.
Резултатът да се отпечата във формат hh : mm.Часовете винаги са между 0 и 23, а минутите винаги са между 0 и 59.
Часовете и минутите се изписват винаги с по две цифри, с водеща нула когато е необходимо

#include <iostream>
int main()
{
    int hours, mins;
    std::cout << "Enter hours:" << std::endl;
    std::cin >> hours;
    std::cout << "Enter minutes:" << std::endl;
    std::cin >> mins;
    int MinsAfter60 = mins - 60 + 15;
    if (hours == 23 && (mins >= 45 && mins < 55))
    {
        std::cout << "00" << ":" << '0' << MinsAfter60;
    }
    else if (hours == 23 && (mins >= 55))
    {
        std::cout << "00" << ":"  << MinsAfter60;
    }
    else if (hours <= 9 && mins < 45)
    {
        std::cout << '0' << hours << ":" << mins + 15;
    }
    else if ((hours > 9 && hours<23) && mins < 45)
    {
        std::cout << hours << ":" << mins + 15;
    }
    else if (hours < 9 && (mins >= 45 && mins < 55))
    {
        std::cout << '0' << hours + 1 << ":" << '0' << MinsAfter60;
    }
    else if (hours < 9 && mins >= 55)
    {
        std::cout << '0' << hours + 1 << ":" << MinsAfter60;
    }
    else if ((hours >= 9 && hours<23) && (mins >= 45 && mins < 55))
    {
        std::cout << hours + 1 << ":" << '0' << MinsAfter60;
    }
    else if ((hours >= 9 && hours<23) && mins >= 55)
    {
        std::cout << hours + 1 << ":" << MinsAfter60;
    }
    else
    {
        std::cout << "Invalid hours or minutes!";
    }
    return 0;
}
Задача 2 : Ще казваме, че поредица от числа е трион, ако всяко число в нея е
едновременно по-голямо или равно от двата си съседа или пък едновременно по - малко или равно от тях.
За първия и последния елемент имаме само по един съсед.Напишете програма,
която въвежда от стандартния 5 на брой цели числа.
Да се изведе на стандартния изход "yes", ако въведената поредица е трион, или "no", в противен случай.

#include <iostream>
int main()
{
    std::cout << "Input five numbers:" << std::endl;
    double a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    if ((b >= a && b >= c) && (c >= b && c >= d) && (d >= c && d >= e))
    {
        std::cout << "yes";
    }
    else if ((b >= a && b >= c) && (c >= b && c >= d) && (d <= c && d <= e))
    {
        std::cout << "yes";
    }
    else if ((b >= a && b >= c) && (c <= b && c <= d) && (d >= c && d >= e))
    {
        std::cout << "yes";
    }
    else if ((b >= a && b >= c) && (c <= b && c <= d) && (d <= c && d <= e))
    {
        std::cout << "yes";
    }
    else if ((b <= a && b <= c) && (c <= b && c <= d) && (d <= c && d <= e))
    {
        std::cout << "yes";
    }
    else if ((b <= a && b <= c) && (c <= b && c <= d) && (d >= c && d >= e))
    {
        std::cout << "yes";
    }
    else if ((b <= a && b <= c) && (c >= b && c >= d) && (d >= c && d >= e))
    {
        std::cout << "yes";
    }
    else if ((b >= a && b >= c) && (c >= b && c >= d) && (d <= c && d <= e))
    {
        std::cout << "yes";
    }
    else { std::cout << "no"; }
    return 0;
}
Задача 3 : Да се напише програма, която въвежда от клавиатурата трицифрено число n.
Програмата да проверява дали цифрите му са различни.
Ако са различни, да извежда "yes" и произведението от първата и третата цифра на числото,
в протиовен случай - "no" и числото в обратен ред на цифрите му.

#include <iostream>
int main()
{
    std::cout << "Input 3-digit number:"<<std::endl;
    int number;
    std::cin >> number;
    int hundreds = number / 100;
    int dozens = (number % 100) / 10;
    int units = number % 10;
    if (hundreds != dozens && dozens != units && hundreds != units)
    {
        std::cout << "yes"<<std::endl<<hundreds*units;
    }
    else { std::cout << "no" << std::endl << units << dozens << hundreds; }
    return 0;
}
Задача 4 : Да се напише програма, която въвежда от клавиатурата три цели числа, различни от нула.
Програмата да извежда разликата между максималното четно и минималното нечетно число от тях.
Ако въведените числа са само нечетни, да извежда миниланото от тях. Ако са сано четни - максималното от тях.

#include <iostream>
int main()
{
    std::cout << "Input 3 whole numbers:" << std::endl;
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
    if(num1==0 || num2==0 || num3==0)
    {
        std::cout << "All number must be different from 0"<<std::endl<<"Enter 3 whole numbers excluding 0:"<<std::endl;
        std::cin >> num1 >> num2 >> num3;
    }
    if (num1 % 2 == 0 && num2 % 2 == 0 && num3 % 2 == 0)
    {
        if (num1 >= num2 && num1 >= num3) { std::cout << num1; }
        else if (num2 >= num1 && num2 >= num3) { std::cout << num2; }
        else if (num3 >= num2 && num3 >= num1) { std::cout << num3; }
    }
    else if (num1 % 2 != 0 && num2 % 2 != 0 && num3 % 2 != 0)
    {
        if (num1 <= num2 && num1 <= num3) { std::cout << num1; }
        else if (num2 <= num1 && num2 <= num3) { std::cout << num2; }
        else if (num3 <= num2 && num3 <= num1) { std::cout << num3; }
    }
    else if (num1 % 2 == 0 && num2 % 2 != 0 && num3 % 2 != 0)
    {
        if (num2 <= num3) { std::cout << num1 - num2; }
        else if (num3 <= num2) { std::cout << num1 - num3; }
    }
    else if (num2 % 2 == 0 && num1 % 2 != 0 && num3 % 2 != 0)
    {
        if (num1 <= num3) { std::cout << num2 - num1; }
        else if (num3 <= num1) { std::cout << num2 - num3; }
    }
    else if (num3 % 2 == 0 && num2 % 2 != 0 && num1 % 2 != 0)
    {
        if (num2 <= num1) { std::cout << num3 - num2; }
        else if (num1 <= num2) { std::cout << num3 - num1; }
    }
    else if (num1 % 2 != 0 && num2 % 2 == 0 && num3 % 2 == 0)
    {
        if (num2 >= num3) { std::cout << num2 - num1; }
        else if (num3 >= num2) { std::cout << num3 - num1; }
    }
    else if (num1 % 2 != 0 && num1 % 2 == 0 && num3 % 2 == 0)
    {
        if (num1 >= num3) { std::cout << num1 - num2; }
        else if (num3 >= num1) { std::cout << num3 - num2; }
    }
    else if (num3 % 2 != 0 && num2 % 2 == 0 && num1 % 2 == 0)
    {
        if (num2 >= num1) { std::cout << num2 - num3; }
        else if (num1 >= num2) { std::cout << num1 - num3; }
    }
}
Задача 5 : Да се напише програма, която по зададен месец и година,
въведени от клавиатурата, определя броя на дните в този месец.
#include <iostream>
int main()
{
    std::cout << "Enter month:" << std::endl;
    int month,year;
    std::cin >> month;
    std::cout << "Enter year:" << std::endl;
    std::cin >> year;
    if (month == 2 && year % 4 == 0) { std::cout << "29"; }
    else if (month == 2 && year % 4 != 0) { std::cout << "28"; }
    else switch (month)
    {
    case 1: std::cout << "31"; break;
    case 3: std::cout << "31"; break;
    case 5: std::cout << "31"; break;
    case 7: std::cout << "31"; break;
    case 8: std::cout << "31"; break;
    case 10: std::cout << "31"; break;
    case 12: std::cout << "31"; break;
    case 4: std::cout << "30"; break;
    case 6: std::cout << "30"; break;
    case 9: std::cout << "30"; break;
    case 11: std::cout << "30"; break;
    default:std::cout << "Invalid month!";
    }
    return 0;
}*/