// 18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//18

#include <iostream>

int main()
{
    double nylon, paint, paintThinner, workHours;
    std::cin >> nylon >> paint >> paintThinner >> workHours;
    double bagsPrice = 0.4;
    paint += 0.1 * paint;
    nylon += 3;
    double materialCost = nylon * 2.5 + paint * 14.25 + paintThinner * 5 + bagsPrice;
    double payPerHour = 0.3 * materialCost;
    double costs = materialCost + payPerHour * workHours;
    std::cout << "Total cost: " << costs << " lv.";
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
