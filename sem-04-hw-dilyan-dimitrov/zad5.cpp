#include <iostream>

int sorting(int n)
{
	int reversed = 0;
	for (int i = 0; i <= 9; i++)
	{
		int copy = n;
		while (copy > 0)
		{
			if (copy % 10 == i)
			{
				reversed *= 10;
				reversed += i;
			}
			copy /= 10;
		}
	}
	return reversed;
}

int main()
{
	int num;
	std::cout << "Enter a number" << std::endl;
	std::cin >> num;
	std::cout << sorting(num);
}