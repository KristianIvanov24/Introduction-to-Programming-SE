#include <iostream>

int main()
{
	double sideA, sideB;
	std::cout << "Enter side A: ";
	std::cin >> sideA;
	std::cout << "Enter side B: ";
	std::cin >> sideB;

	double perimeter = 2 * sideA + 2 * sideB;
	double area = sideA * sideB;
	bool isSquare = sideA == sideB;

	std::cout << "Perimeter: " << perimeter << std::endl;
	std::cout << "Area: " << area << std::endl;
	std::cout << "Is square: " << isSquare << std::endl;
}
