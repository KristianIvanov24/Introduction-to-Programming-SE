#include <iostream>
int main()
{
	//Напишете програма, която приема нечетно естествено число и отпечатва следния пясъчен часовник
	int num;
	std::cout << "input number: ";
	std::cin >> num;
	for (int i = num; i > 0; i--)
	{
		if (i % 2 == 0)std::cout << std::endl;
		else
		{
			for (int j = (num-i)/2; j > 0; j--)
				std::cout << ' ';
			for (int j = 0; j < i; j++)
				std::cout << '*';
			std::cout << std::endl;
		}
	}
	for(int i = 2;i <= num;i++)
	{
		if (i % 2 == 0)std::cout << std::endl;
		else
		{
			for (int j = (num - i) / 2; j > 0; j--)
				std::cout << ' ';
			for (int j = 0; j < i; j++)
				std::cout << '*';
			std::cout << std::endl;
		}
	}
}
