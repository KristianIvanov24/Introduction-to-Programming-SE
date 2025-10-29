#include <iostream>

int main()
{
	double sideA, sideB, sideC;
	std::cin >> sideA >> sideB >> sideC;

	bool validTriangle = sideA + sideB > sideC && sideA + sideC > sideB 
		&& sideB + sideC > sideA;

	if (validTriangle) {
		std::cout << "The triangle exists and is ";
		if (sideA == sideB && sideB == sideC) {
			std::cout << "equilateral.";
		}
		else if (sideA == sideB || sideA == sideC || sideB == sideC) {
			std::cout << "isosceles.";
		}
		else {
			std::cout << "scalene.";
		}
	}
	else {
		std::cout << "Triangle doesn't exist." ;
	}
}