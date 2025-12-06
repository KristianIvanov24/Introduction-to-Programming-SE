#include<iostream>

bool areDigitsSorted(int n)
{
	int lastDigit = n % 10;
	n /= 10;
	bool growing = true;
	bool decreasing = true;
	while (n > 0)
	{
		int next = n % 10;
		if (next > lastDigit)
			growing = false;
		if (next < lastDigit)
			decreasing = false;
		lastDigit = next;
		n /= 10;
	}
	return growing || decreasing;
}

int main()
{
	int n;
	std::cin >> n;
	if (areDigitsSorted(n))
	{
		std::cout << "true";
	}
	else
		std::cout << "false";
}