#include <iostream>

int main()
{
    int num;
	std::cin >> num;

	if(num % 2 == 0 || num < 1) 
	{
		std::cout << "Invalid input";
		return 0;
	}

	for (int i = num; i >= 1; i -= 2)
	{

		for(int j = 1; j <= (num - i) / 2; j++) 
		{
			std::cout << ' ';
		}

		for(int j = 1; j <= i; j++) 
		{
			std::cout << '*';
		}
		std::cout << std::endl;
	}

	for (int i = 3; i <= num; i += 2)
	{
		for (int j = 1; j <= (num - i) / 2; j++)
		{
			std::cout << ' ';
		}

		for (int j = 1; j <= i; j++)
		{
			std::cout << '*';
		}
		std::cout << std::endl;
	}

    return 0;
}