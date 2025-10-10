#include <iostream>

int main()
{
    int rent;
	std::cin >> rent;

	double cake = rent * 0.20;
	double drinks = cake * 0.55;
	double animator = rent / 3.0;

	double total = rent + cake + drinks + animator;

	std::cout << "Total budget: " << total << std::endl;

	return 0;
}
