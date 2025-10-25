#include <iostream>

int main()
{
    int r, x, y;
    std::cin >> r >> x >> y;

	int lengthSquared = x * x + y * y;
	int radiusSquared = r * r;

	if (lengthSquared == radiusSquared)
	{
		std::cout << "Point is on the circle.";
	}
	else if (lengthSquared > radiusSquared)
	{
		std::cout << "Point is outside the circle.";
	}
	else
	{
		std::cout << "Point is inside the circle.";
	}
	return 0;
}

