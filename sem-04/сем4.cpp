#include <iostream>

int Reverse(int n)
{
	int multiplier = 10;
	int reversed = 0;
	while (n)
	{
		reversed = reversed * multiplier + n % 10;
		n /= 10;
	}
	return reversed;
}

int Concatenation(int N)
{
	int multiplier = 10;
	while (N >= multiplier)
	{
		multiplier *= 10;
	}
	return Reverse(N) * multiplier + N;
}
bool isSorted(int n)
{
	bool increasing = true;
	bool decreasing = true;
	int digit = n % 10;

	while (n / 10 != 0)
	{
		int next_digit = (n / 10) % 10;
		if (next_digit > digit)
		{
			increasing = false;
		}
		if (next_digit < digit)
		{
			decreasing = false;
		}
		digit = next_digit;
		n /= 10;
	}
	return increasing || decreasing;
}

double Perimeter(int x1, int y1, int x2, int y2, int x3, int y3)
{
	double sideA = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	double sideB = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	double sideC = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	return sideA + sideB + sideC;
}

int Sorted(int n)
{
	if (n < 0) return -1;
	if (n / 10 == 0) return n;

	for (int i = 1; ; i++)
	{
		int nCopy = n;
		int digit = -1;
		while (nCopy)
		{
			int currentDigit = nCopy % 10;
			if (currentDigit > digit)
			{
				digit = currentDigit;
			}
			nCopy /= 10;
		}
		
		while (i)
		{

		}
	}
}

int main()
{
	//std::cout << Reverse(345);
	//std::cout << Concatenation(345);
	//std::cout << isSorted(6632);
	//std::cout << Perimeter(1, 1, 4, 7, 0, 10);
	std::cout << Sorted(531261);
}