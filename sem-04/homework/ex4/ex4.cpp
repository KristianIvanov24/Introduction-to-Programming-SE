#include <iostream>

double getDistanceBetweenCoordinates(int x1, int y1, int x2, int y2)
{
	int deltaX = x2 - x1;
	int deltaY = y2 - y1;
	return sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main()
{
	int x1, y1, x2, y2, x3, y3;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double a = getDistanceBetweenCoordinates(x1, y1, x2, y2);
	double b = getDistanceBetweenCoordinates(x2, y2, x3, y3);
	double c = getDistanceBetweenCoordinates(x3, y3, x1, y1);

	double perimeter = a + b + c;

	std::cout << perimeter;

    return 0;
}
