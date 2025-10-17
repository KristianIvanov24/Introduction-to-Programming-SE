// 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//7

#include <iostream>

int main()
{
    int inputLv;
    std::cin >> inputLv;
    int lv100 = inputLv / 100;
    int lv50 = inputLv / 50 - lv100 * 2;
    int lv20 = inputLv / 20 - (lv100 * 5 + lv50 * 2);
    int lv10 = inputLv / 10 - (lv100 * 10 + lv50 * 5 + lv20 * 2);
    int lv5 = inputLv / 5 - (lv100 * 20 + lv50 * 10 + lv20 * 4 + lv10 * 2);
    int lv2 = inputLv / 2 - (lv100 * 50 + lv50 * 25 + lv20 * 10 + lv10 * 5 + lv5 * 2);
    int lv1 = inputLv - (lv100 * 100 + lv50 * 50 + lv20 * 20 + lv10 * 10 + lv5 * 5 + lv2 * 2);
    std::cout << lv100 << "x100lv " << lv50 << "x50lv " << lv20 << "x20lv " << lv10 << "x10lv " << lv5 << "x5lv " << lv2 << "xlv2 " << lv1 << "xlv1";
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
