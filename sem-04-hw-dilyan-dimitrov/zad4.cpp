#include <iostream>
#include<cmath>

double perimeter(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double d1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	double d2 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	double d3 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	if (d1 < d2 + d3 && d2 < d1 + d3 && d3 < d1 + d2)
		return d1 + d2 + d3;
	else
		return 0;
}

int main()
{
	double x1, y1, x2, y2, x3, y3;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	std::cout << "The perimeter is:" << perimeter(x1, y1, x2, y2, x3, y3);
}