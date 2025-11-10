// zad-sem02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    /*
    int hours, minutes;
    std::cin >> hours >> minutes;
    if ((hours >= 0 && hours <= 23) && (minutes >= 0 && minutes <= 59))
    {
        minutes += 15;
        
        if(minutes>=59)
        {
            hours += 1;
            minutes = minutes - 60;
            if (hours >= 23)
            {
                hours =hours-24;
            }
        }
    }
    if (hours < 10)
        std::cout << "0" << hours << ":";
    else
        std::cout << hours << ":";
    if (minutes < 10)
        std::cout <<"0"<< minutes << std::endl;
    else
        std::cout << minutes << std::endl;
    

    
    int firstNum, secNum, thirdNum, fourthNum, fifthNum;
    int check = 0;
    std::cin >> firstNum >> secNum >> thirdNum >> fourthNum >> fifthNum;
    if ((thirdNum <= secNum >= firstNum) || (thirdNum >= secNum <= firstNum))
        check +=1;
    if ((secNum <= thirdNum >= fourthNum) || (secNum >= thirdNum <= fourthNum))
        check +=1;
    if ((thirdNum <= fourthNum >= fifthNum) || (thirdNum >= fourthNum <= fifthNum))
        check +=1;
    if (check < 3)
        std::cout << "no";
    else
        std::cout << "yes";
        
    int number;
    std::cin >> number;
    int ones, tens, hundreds;
    ones = number % 10;
    tens = (number / 10) % 10;
    hundreds = number / 100;
    if ((ones != tens)&&(tens!= hundreds))
    {
        std::cout << "yes" << std::endl;
        std::cout << ones * hundreds;
    } 
    else
    {
        std::cout << "no" << std::endl;
        std::cout << ones << tens << hundreds;
    }
    
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a != 0 && b != 0 && c != 0)
    {
        if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0)
        {
            if (c > a < b)std::cout << a;
            else if (c > b < a)std::cout << b;
            else if (b > c < a)std::cout << c;
        }
        else if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
        {
            if (c< a > b)std::cout << a;
            else if (c<b>a)std::cout << b;
            else if (b<c>a)std::cout << c;
        }
        else
        {
            int maxEven=-100000000;
            int minOdd = 10000000000;
            if (a % 2 == 0)
            {
                if(maxEven<a) maxEven = a;
            }
            else
            {
                if(minOdd>a)minOdd = a;
            }
            if (b % 2 == 0)
            {
                if(maxEven<b)maxEven = b;
            }
            else
            {
                if(minOdd>b)minOdd = b;
            }
            if (c % 2 == 0)
            {
                if (maxEven < c)maxEven = c;
            }
            else
            {
                if(minOdd>c)minOdd = c;
            }
            std::cout << maxEven - minOdd;
        }
    }
    else
        std::cout << "Invalid number";
    /*
    int month, year,days;
    std::cin >> month >> year;
    if (year % 4 != 0)
    {
        if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
            days = 31;
        else if (month == 2)
            days = 28;
        else
            days = 30;
    }
    else
    {
        if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
            days = 31;
        else if (month == 2)
            days = 29;
        else
            days = 30;
    }
    std::cout << days;
    
    return 0;
    */


}

