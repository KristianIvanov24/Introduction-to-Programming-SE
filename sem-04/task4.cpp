#include <iostream>
#include <cmath>
double sidelenght(int x, int y, int a, int d)
{
	double lengtsqr = (a - x) * (a - x) + (d - y) * (d - y);
	double sidelen = sqrt(lengtsqr);
	return sidelen;
}
double perimetre(int a, int b, int c, int d, int e, int f)
{
	double perimetre = sidelenght(a, b, c, d) + sidelenght(a, b, e, f) + sidelenght(c, d, e, f);
	return perimetre;
}
int main()
{
	double x1, y1, x2, y2, x3, y3;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double result = perimetre(x1, y1, x2, y2, x3, y3);
	std::cout << result;
}