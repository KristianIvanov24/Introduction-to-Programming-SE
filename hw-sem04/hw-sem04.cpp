// hw-sem04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int reversed(int n)
{
	int reversed = 0;
	int lastdigit = 0;
	while (n > 0)
	{
		lastdigit = n % 10;
		reversed = reversed * 10 + lastdigit;
		n /= 10;

	}
	return reversed;
}
void reversedPlusInput(int n)
{
	int copy = n;
	int reversed = 0;
	int digit = 0;
	while (n > 0)
	{
		digit = n % 10;
		reversed = reversed * 10 + digit;
		n /= 10;
	}
	std::cout << reversed << copy;
}
void isSorted(int n)
{
	bool ascending = true;
	bool descending = true;
	int lastDigit = n % 10;
	n /= 10;
	while (n > 0)
	{
		int currentDigit = n % 10;
		if (currentDigit > lastDigit)
			ascending = false;
		else if (currentDigit < lastDigit)
			descending = false;
		lastDigit = currentDigit;
		n /= 10;
	}
	bool sorted = ascending || descending;
	std::cout << (sorted ? "true" : "false");
}
double perimeter(int x1,int y1,int x2,int y2,int x3,int y3)
{
	double p = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))
		+ sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2))
		+ sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	return p;
}
void sort(int n)
{
		for (int i = 1;i <= 9;i++)
		{
			int lastDigit = n % 10;
			if (lastDigit == i)
				std::cout << lastDigit;
			else
				continue;
		}
	
}
int main()
{
	//int n;
	//std::cin >> n;
	//std::cout << reversed(n);
	//isSorted(132239);
	//reversedPlusInput(n);
	//std::cout << perimeter(1, 1, 4, 7, 0, 10);
	//sort(531261);
}

