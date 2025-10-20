// 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//4

#include <iostream>

int main()
{
	//no loops ;(

	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;
	int minOddNum = 2147483647;
	int maxEvenNum = -2147483647;
	if (num1 % 2 == 0 && num1 > maxEvenNum)
	{
		maxEvenNum = num1;
	}
	if (num2 % 2 == 0 && num2 > maxEvenNum)
	{
		maxEvenNum = num2;
	}
	if (num3 % 2 == 0 && num3 > maxEvenNum)
	{
		maxEvenNum = num3;
	}

	if (num1 % 2 != 0 && num1 < minOddNum)
	{
		minOddNum = num1;
	}
	if (num2 % 2 != 0 && num2 < minOddNum)
	{
		minOddNum = num2;
	}
	if (num3 % 2 != 0 && num3 < minOddNum)
	{
		minOddNum = num3;
	}

	if (minOddNum == 2147483647)
	{
		std::cout << maxEvenNum << std::endl;
	}
	else if (maxEvenNum == -2147483647)
	{
		std::cout << minOddNum << std::endl;
	}
	else
	{
		std::cout << maxEvenNum - minOddNum << std::endl;
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
