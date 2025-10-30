// Sem2_Milen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//1

#include <iostream>

int main()
{
	int hours, minutes;
	std::cin >> hours >> minutes;
	if (minutes >= 45)
	{
		hours++;
		minutes += 15;
		minutes -= 60;
	}
	else
	{
		minutes += 15;
	}
	if (hours == 24)
	{
		hours -= 24;
	}
	if (hours < 10)
	{
		std::cout << 0;
	}
	std::cout << hours << ':';
	if (minutes < 10)
	{
		std::cout << 0;
	}
	std::cout << minutes << std::endl;
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
