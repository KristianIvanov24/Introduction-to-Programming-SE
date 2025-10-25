#include <iostream>

int main()
{
    int x, y, x1, y1, x2, y2;
    std::cin >> x >> y >> x1 >> y1 >> x2 >> y2;

	if ((x >= x1 && x <= x2) || (x >= x2 && x <= x1))
	{
		if ((y >= y1 && y <= y2) || (y >= y2 && y <= y1))
		{
			std::cout << "Point is inside the rectangle.";
		}
		else std::cout << "Point is outside the rectangle.";
	}
	else std::cout << "Point is outside the rectangle.";
	return 0;
}

