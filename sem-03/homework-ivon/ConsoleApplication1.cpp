// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	////1
	//
	//int num;
	//std::cin >> num;
	//int sum = 0;

	//while (num != 0)
	//{
	//    sum += num;
	//    std::cin >> num;
	//}

	//std::cout << sum;

	////2

	//int a, b, c, d, e;
	//std::cin >> a >> b >> c >> d >> e;

	//for (int i = -100; i <= 100;i++)
	//{
	//    int result = a * pow(i, 4) + b * pow(i, 3) + c * pow(i, 2) + d * i + e;
	//    if (result >= 0)
	//    {
	//        std::cout << i;
	//    }
	//}

	//3

	//int num;
	//std::cin >> num;


	//int count = 1;
	//int current = num % 10;

	//for (int i = num/10; i > 0; i/=10)
	//{
	//    if (current == i%10)
	//    {
	//        count++;
	//    }
	//    else
	//    {
	//        count--;
	//        
	//    }
	//    if (count == 0 )
	//    {
	//        count = 1;
	//        
	//        if (current > (i % 10))
	//        {
	//            current = i % 10;
	//        }
	//    }
	//}

	//std::cout << current;


	//4
	/*int m, n;
	std::cin >> m >> n;
	int count = 0;

	for(int i = m; i <= n; i++)
	{
		int num = i;
		bool areSame = false;
		while (num > 0)
		{
			int lastDigit = num % 10;
			int otherDigits = num / 10;

			while (otherDigits > 0)
			{
				if (lastDigit == otherDigits % 10)
				{
					areSame = true;
					break;
				}
				else
				{
					otherDigits /= 10;
				}
			}
			if (areSame)
			{
				break;
			}
			num /= 10;
		}

		if (!areSame)
		{
			count++;
		}

	}

	std::cout << count;*/


	//5

		/*int num;
		std::cin >> num;

		for(int i = 0;i<num;i++)
		{
			std::cout << '*';
		}

		std::cout << std::endl;

		for (int i = 1; i < num/2; i++)
		{
			for (int j = 1; j <= i ; j++)
			{
				std::cout << ' ';
			}

			for (int j = 0;j < 2*((num-1)/2-i)+1;j++)
			{
				std::cout << '*';
			}


			std::cout << std::endl;
		}

		for (int i = num / 2+1;i <= num;i++)
		{
			for (int j = 0; j <= num-i-1; j++)
			{
				std::cout << ' ';
			}

			for (int j = 1;j <= 2 * i - num;j++)
			{
				std::cout << '*';
			}

			std::cout << std::endl;
		}*/

		//6

	   /* int n;
		std::cin >> n;

		int power = n * n;

		for (int i = 1;i <= n;i++)
		{
			if (i % 2 == 1)
			{
				for (int j = n*i-n+1;j <= n * i;j++)
				{
					std::cout << j << ' ';
				}

			}
			else
			{
				for (int j = n * i;j >= n*i-n +1;j--)
				{
					std::cout << j << ' ';
				}
			}
			std::cout << std::endl;
		}*/

		//7

	int num;
	std::cin >> num;

	int middle = num / 2;




	for (int j = 1;j <= num;j++)
	{
		std::cout << '.';
	}

	for (int j = 1; j <= num - num / 2;j++)
	{
		std::cout << ' ';
	}

	for (int j = 1;j <= num;j++)
	{
		std::cout << '.';
	}

	std::cout << std::endl;

	if (num % 2 == 0)
	{

	}


	for (int i = 2;i <= num - 1;i++)
	{



		std::cout << '.';

		for (int j = 1; j <= num - 2; j++)
		{
			std::cout << ' ';
		}

		std::cout << '.';

		if (num % 2 == 0 && (i == middle || i == middle + 1))
		{
			for (int j = 1; j <= num - num / 2; j++)
			{
				std::cout << '.';
			}
		}
		else if (num % 2 == 1 && i == middle + 1)
		{

			for (int j = 1; j <= num - num / 2; j++)
			{
				std::cout << '.';
			}
		}
		else
		{
			for (int j = 1; j <= num - num / 2; j++)
			{
				std::cout << ' ';
			}
		}

		std::cout << '.';

		for (int j = 1; j <= num - 2; j++)
		{
			std::cout << ' ';
		}

		std::cout << '.';
		std::cout << std::endl;
	}





	for (int j = 1;j <= num;j++)
	{
		std::cout << '.';
	}

	for (int j = 1; j <= num - num / 2;j++)
	{
		std::cout << ' ';
	}

	for (int j = 1;j <= num;j++)
	{
		std::cout << '.';
	}

	std::cout << std::endl;



}

