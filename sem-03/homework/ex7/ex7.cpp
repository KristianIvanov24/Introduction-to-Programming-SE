#include <iostream>

int main()
{

    int n;
	std::cin >> n;

	int mid1 = n / 2;
	int mid2 = (n % 2 == 0) ? mid1 - 1 : mid1;


	for (int i = 0; i < n; i++)
	{
		if(i == 0 || i == n - 1) 
		{
			for (int j = 0; j < n; j++) 
			{
				std::cout << '.';
			}

			for(int j = 0; j < n - 2; j++)
			{
				std::cout << ' ';
			}

			for (int j = 0; j < n; j++)
			{
				std::cout << '.';
			}
		}
		else
		{
			std::cout << '.';
			for (int j = 0; j < n - 2; j++) 
			{
				std::cout << ' ';
			}
			std::cout << '.';

			if (i == mid1 || i == mid2)
			{
				for (int j = 0; j <= n - 2; j++)
				{
					std::cout << '.';
				}
			}
			else 
			{
				for (int j = 0; j < n - 2; j++)
				{
					std::cout << ' ';
				}
				std::cout << '.';
			}


			for(int j = 0; j < n - 2; j++) 
			{
				std::cout << ' ';
			}
			std::cout << '.';
		}

		std::cout << std::endl;
	}

    return 0;
}
