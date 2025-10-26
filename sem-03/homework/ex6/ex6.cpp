#include <iostream>

int main()
{
    int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) 
	{
		if (i % 2 == 0) 
		{
			for(int j = i * n + 1; j <= i * n + n; j++) 
			{
				std::cout << j << ' ';
			}
		} 
		else
		{
			for (int j = i * n + n; j > i * n; j--)
			{
				std::cout << j << ' ';
			}
		}

		std::cout << std::endl;
	}

    return 0;
}