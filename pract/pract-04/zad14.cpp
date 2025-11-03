#include <iostream>
const int MIN_VALUE = 1;
int main()
{
	//Напишете програма, която рисува на конзолата елха, по зададен размер.
	int n;
	std::cout << "Input number: ";	
	std::cin >> n;
	if (n < MIN_VALUE)
	{
		std::cout << "Number must be greater than 0";
		return 0;
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
			std::cout << " ";
		for (int j = 0; j < i; j++)
			std::cout << "*";
		std::cout << " | ";
		for (int j = 0; j < i; j++)
			std::cout << "*";
		std::cout << std::endl;
	}
}
