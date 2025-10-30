// 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//5

#include <iostream>

int main()
{
    //Negative years are technically valid (BCE)

    int month, year;
    std::cin >> month >> year;
    int days;
    bool isLeapYear = false;
    if (year <= 0)
    {
        std::cout << "Invalid year!";
        return 0;
    }
    else if ((year % 4 == 0 && !(year % 100 == 0)) || year % 400 == 0)
    {
        isLeapYear = true;
    }
    if (month >= 1 && month <= 7 && month != 2)
    {
        if (month % 2 != 0)
        {
            days = 31;
        }
        else
        {
            days = 30;
        }
    }
    else if (month >= 8 && month <= 12 && month != 2)
    {
        if (month % 2 == 0)
        {
            days = 31;
        }
        else
        {
            days = 30;
        }
    }
    else if (month == 2)
    {
        if (!isLeapYear)
        {
            days = 28;
        }
        else
        {
            days = 29;
        }
    }
    else
    {
        std::cout << "Invalid month!";
        return 0;
    }
    std::cout << days << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
