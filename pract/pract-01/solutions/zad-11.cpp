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

	bool isGeometricProgression = b * b == a * c && c * c == b * d;
	std::cout << isGeometricProgression;
}
