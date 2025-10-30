// 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//2

#include <iostream>

int main()
{
    //without loops ;(

    int num1, num2, num3, num4, num5;
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
    bool isTrion = true;
    if (!((num2 <= num1 && num2 <= num3) || (num2 >= num1 && num2 >= num3)))
    {
        isTrion = false;
    }
    if (!((num3 <= num2 && num3 <= num4) || (num3 >= num2 && num3 >= num4)))
    {
        isTrion = false;
    }
    if (!((num4 <= num3 && num4 <= num5) || (num4 >= num3 && num4 >= num5)))
    {
        isTrion = false;
    }

    if (isTrion)
    {
        std::cout << "yes" << std::endl;
    }
    else
    {
        std::cout << "no" << std::endl;
    }
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
