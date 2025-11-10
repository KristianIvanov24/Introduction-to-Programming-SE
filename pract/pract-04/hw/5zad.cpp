#include <iostream>

int main()
{
	int n, absentElement, sum = 0;
	std::cin >> n;

	for (int i = 1; i <= n - 1; i++)
	{
		int element;
		std::cin >> element;
		sum += element;
	}

	absentElement = n * (n + 1) / 2 - sum;
	std::cout << absentElement;
	return 0;
}