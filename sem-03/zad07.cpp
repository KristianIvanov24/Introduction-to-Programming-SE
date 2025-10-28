#include <iostream>
int main()
{
	//Да се напише програма, която приема цяло положително число n и отпечатва следната гира:
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1 || i == n) 
		{
			for (int j = 0; j < n; j++)std::cout << '*';
			for (int j = 0; j < n - 2; j++)std::cout << ' ';
			for (int j = 0; j < n; j++)std::cout << '*';
			std::cout << std::endl;
			continue;
		}
		std::cout << '*';
		for (int j = 0; j < n - 2; j++)
			std::cout << ' ';
		std::cout << '*';
		if (n % 2 == 0) 
		{
			for (int j = 0; j < n - 2; j++)
			{
				if (i == n / 2 || i == n / 2 + 1)
					std::cout << '*';
				else
					std::cout << ' ';
			}
		}
		else
		{
			for (int j = 0; j < n - 2; j++)
			{
				if (i == n / 2 + 1)
					std::cout << '*';
				else
					std::cout << ' ';
			}
		}
		std::cout << '*';
		for (int j = 0; j < n - 2; j++)
			std::cout << ' ';
		std::cout << '*'<<std::endl;
	}
}
