#include <iostream>

const double CAKE_COEF = 0.2;
const double DRINKS_COEF = 0.45;
const double ANIMATOR_COEF = 0.333333;

int main()
{
	double rent;
	std::cout << "Enter rent of party room: ";
	std::cin >> rent;

	double cake = rent * CAKE_COEF;
	double drinks = cake - (cake * DRINKS_COEF);
	double animator = ANIMATOR_COEF * rent;

	double sum = rent + cake + drinks + animator;
	std::cout << sum;
}
