#include <iostream>

const double PI = 3.14159;

int main()
{
	double radius;
	std::cout << "Enter radius of circle: ";
	std::cin >> radius;

	double perimeter = 2 * PI * radius;
	double area = PI * radius * radius;

	std::cout << "Perimeter: " << perimeter << std::endl;
	std::cout << "Area: " << area;
}
