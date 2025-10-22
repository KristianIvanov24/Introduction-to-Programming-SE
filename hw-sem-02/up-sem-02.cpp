#include <iostream>

   //zad1
   /*
int main()
{
    int hours, minutes;
    std::cout << "enter hours and minutes" << std::endl;
    std::cin >> hours >> minutes;
    if (hours > 23 || hours < 0 || minutes < 0 || minutes>59)
    {
        std::cout<<"invalid time" << std::endl;
    }
    else
    {
        minutes += 15;

        if (minutes >= 60)
        {
            minutes = minutes - 60;
            hours++;
        }
        if (hours >= 24)
        {
            hours -=24;
        }
        if (hours < 10)
        {
            std::cout << "0" << hours << ":" << minutes;
        }

        if (minutes < 10)
        {
            std::cout << hours << ":" << "0" << minutes;
        }
        if (hours < 10 && minutes < 10)
        {
            std::cout << "0" << hours << ":" << "0" << minutes;
        }
        if (hours > 10 && minutes > 10)
        {
            std::cout << hours << ":" << minutes;
        }
    }
    }
    */
    

   //zad2
   /*
    int main()
    {
    int num1, num2, num3, num4, num5;
    std::cout << "enter 5 numbers" << std::endl;
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
    if (((num2 >= num1 && num2 >= num3) || (num2 <= num1 && num2 <= num3)) && ((num3 >= num2 && num3 >= num4) || (num3 <= num2 && num3 <= num4)) && ((num4 >= num3 && num4 >= num5) || (num4 <= num3 && num4 <= num5)))
    {
        std::cout << "yes"<<std::endl;
    }
    else
    {
        std::cout<<"no" << std::endl;
    }
    }
    */
    


    //zad3
    /*
    * int main()
    {
    int n;
    std::cout << "enter three-digit number" << std::endl;
    std::cin >> n;
    int d1, d2, d3;
    d1 = n / 100;
    d2 = (n / 10) % 10;
    d3 = n % 10;
    if (d1 != d2 && d1 != d3 && d2 != d3)
    {
        std::cout << "yes" << std::endl;
        std::cout << d1 * d3;
    }
    else
    {
        std::cout<< "no" << std::endl;
        std::cout << d3 << d2 << d1;
    }
    }
    */


//zad4
/*
int main()
{
    int a, b, c;
    std::cout << "enter three digits"<<std::endl;
    std::cin >> a >> b >> c;
    if (a == 0 || b == 0 || c == 0)
    {
        std::cout << "invalid number";
    }
    else
    {
        if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
        {
            int maxNum;
            if (a >= b && a >= c) { maxNum = a; }
            else if (b >= a && b >= c) { maxNum = b; }
            else { maxNum = c; }
            std::cout << maxNum;
        }
        else if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0)
        {
            int minNum;
            if (a <= b && a <= c) { minNum = a; }
            else if (b <= a && b <= c) { minNum = b; }
            else { minNum = c; }
            std::cout << minNum;
        }
        else if (a % 2 == 0 && b % 2 != 0 && c % 2 != 0)
        {
            bool condition = (b < c);
            std::cout << (condition ? (a - b) : (a - c));
        }
        else if (a % 2 != 0 && b % 2 == 0 && c % 2 != 0)
        {
            bool condition = (a < c);
            std::cout << (condition ? (b - a) : (b - c));
        }
        else if (a % 2 != 0 && b % 2 != 0 && c % 2 == 0)
        {
            bool condition = (a < b);
            std::cout << (condition ? (c - a) : (c - b));
        }
        else if (a % 2 == 0 && b % 2 == 0 && c % 2 != 0)
        {
            bool condition = (a > b);
            std::cout << (condition ? (a - c) : (b - c));
        }
        else if (a % 2 == 0 && b % 2 != 0 && c % 2 == 0)
        {
            bool condition = (a > c);
            std::cout << (condition ? (a - b) : (c - b));
        }
        else if (a % 2 != 0 && b % 2 == 0 && c % 2 == 0)
        {
            bool condition = (b > c);
            std::cout << (condition ? (b - a) : (c - a));
        }
    }
}
*/


//zad5
/*
int main()
{
    int month, year;
    std::cout << "enter month and year"<<std::endl;
    std::cin >> month >> year;
    bool condition = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

        switch (month)
        {
        case 1:std::cout << "31"; break;
        case 2:std::cout << (condition ? "29" : "28"); break;
        case 3:std::cout << "31"; break;
        case 4:std::cout << "30"; break;
        case 5:std::cout << "31"; break;
        case 6:std::cout << "30"; break;
        case 7:std::cout << "31"; break;
        case 8:std::cout << "30"; break;
        case 9:std::cout << "31"; break;
        case 10:std::cout << "30"; break;
        case 11:std::cout << "31"; break;
        case 12:std::cout << "30"; break;
        default:std::cout << "invalid month";
        }
    }
    */



