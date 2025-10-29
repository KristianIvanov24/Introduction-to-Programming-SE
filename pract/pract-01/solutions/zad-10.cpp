#include <iostream>

int main()
{
	int a, b, c, d;
	std::cout << "Enter number A: ";
	std::cin >> a;
	std::cout << "Enter number B: ";
	std::cin >> b;
	std::cout << "Enter number C: ";
	std::cin >> c;
	std::cout << "Enter number D: ";
	std::cin >> d;

	bool isArithmeticProgression = b - a == c - b && c - b == d - c;
	std::cout << isArithmeticProgression;
}

