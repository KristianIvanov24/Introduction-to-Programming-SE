#include <iostream>

int main()
{
	unsigned seconds;
	std::cout << "Enter seconds: ";
	std::cin >> seconds;

	unsigned minutes = seconds / 60;
	unsigned hours = minutes / 60;

	std::cout << hours << " hours, ";
	std::cout << minutes % 60 << " minutes and ";
	std::cout << seconds % 60 << " seconds";
}

