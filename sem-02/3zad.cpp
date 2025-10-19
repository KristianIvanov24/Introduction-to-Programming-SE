#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	if (((num / 100) != ((num / 10) % 10)) && ((num / 100) != (num % 10)) && (((num / 10) % 10) != (num % 10)))
	{
		std::cout << "yes " << (num % 10) * (num / 100);
	}
	else
	{
		std::cout << "no " << num % 10 << (num / 10) % 10 << num / 100;
	}
	
	return 0;
}