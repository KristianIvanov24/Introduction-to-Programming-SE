#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	bool isEvenOrOdd = (num % 2 == 0);

	std::cout << isEvenOrOdd << std::endl;

	return 0;
}

