#include <iostream>
//Напишете функция, която приема 6 целочислени координати (3 точки) и връща обиколката на триъгълника по тези точки.
double absValue(double num)
{
	return num > 0 ? num : -num;
}
double findLengthByTwoPoints(double x1, double y1, double x2, double y2)
{
	double xVectorCoord = x2 - x1;
	double yVectorCoord = y2 - y1;
	double xVecSquared = xVectorCoord * xVectorCoord;
	double yVecSquared = yVectorCoord * yVectorCoord;
	double lengthVector = std::sqrt(xVecSquared + yVecSquared);
	return absValue(lengthVector);
}
double trianglePerimeterByPoints(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double sideA = findLengthByTwoPoints(x1, y1, x2, y2);
	double sideB = findLengthByTwoPoints(x1, y1, x3, y3);
	double sideC = findLengthByTwoPoints(x2, y2, x3, y3);
	return sideA + sideB + sideC;
}
int main()
{
	double x1, y1, x2, y2, x3, y3;
	std::cout << "Input 3 pairs coordinates: ";
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	std::cout << trianglePerimeterByPoints(x1, y1, x2, y2, x3, y3);
}
