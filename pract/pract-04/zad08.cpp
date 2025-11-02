#include <iostream>
int main()
{
	//Напишете програма, която приема цяло число n и проверява дали може да се представи като сума на 2 прости числа. 
	//Ако може, да се изведе всяка възможна сума от 2 прости числа.
	int n;
	std::cout << "Input number: ";
	std::cin >> n;
	bool isSumOfPrimes = false;
	for (int i = 2; i < n / 2; i++)
	{
		bool isFirstNumberPrime = true;
		for (int j = 2; j < i; j++) 
			if (i % j == 0)
			{
				isFirstNumberPrime = false;
				break;
			}
		int temp = n - i;
		bool isSecondNumberPrime = true;
		for (int j = 2; j < temp; j++)
			if (temp % j == 0)
			{
				isSecondNumberPrime = false;
				break;
			}
		if (isFirstNumberPrime && isSecondNumberPrime)
		{
			isSumOfPrimes = true;
			std::cout << n << " = " << i << " + " << temp<<std::endl;
		}
	}
	if (!isSumOfPrimes)
		std::cout << n << " is not a sum of any two prime numbers";
	
}
