#include <iostream>
/*
Задача 4: Напишете функция, която приема 6 целочислени координати (3 точки) и връща обиколката на триъгълника по тези точки.

Вход: 1 1 4 7 0 10, Изход: 20.764
*/

double pointDistance(int p1X, int p2X, int p1Y, int p2Y)
{
	return sqrt((p2X - p1X) * (p2X - p1X) + (p2Y - p1Y) * (p2Y - p1Y));
}

double trianglePerimeter(double sideA, double sideB, double sideC)
{
	return sideA + sideB + sideC;
}

int main()
{
	int p1X, p1Y, p2X, p2Y, p3X, p3Y;

	std::cin >> p1X >> p1Y >> p2X >> p2Y >> p3X >> p3Y;

	double sideA = pointDistance(p1X, p2X, p1Y, p2Y);
	double sideB = pointDistance(p1X, p3X, p1Y, p3Y);
	double sideC = pointDistance(p3X, p2X, p3Y, p2Y);
	std::cout << trianglePerimeter(sideA, sideB, sideC);
}
