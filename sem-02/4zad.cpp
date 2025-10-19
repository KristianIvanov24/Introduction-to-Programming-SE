#include <iostream>

int main()
{
	int x, y, z;
	std::cin >> x >> y >> z;

	if ((x % 2 == 0) && (y % 2 == 0) && (z % 2 == 0))
	{
		if ((x > y) && (x > z)) std::cout << x;
		if ((y > x) && (y > z)) std::cout << y;
		if ((z > x) && (z > y)) std::cout << x;
	} 
	else if ((x % 2 != 0) && (y % 2 != 0) && (z % 2 != 0))
	{
		if ((x < y) && (x < z)) std::cout << x;
		if ((y < x) && (y < z)) std::cout << y;
		if ((z < x) && (z < y)) std::cout << x;
	} 
	else if ((x % 2 == 0) && (y % 2 == 0))
	{
		if ((x > y))
		{
			std::cout << x - z;
		}
		else std::cout << y - z;
	} 
	else if ((x % 2 == 0) && (z % 2 == 0))
	{
		if ((x > z))
		{
			std::cout << x - y;
		}
		else std::cout << z - y;
	}
	else if ((y % 2 == 0) && (z % 2 == 0))
	{
		if ((y > z))
		{
			std::cout << y - x;
		}
		else std::cout << z - x;
	}
	else if ((x % 2 != 0) && (y % 2 != 0))
	{
		if ((x < y))
		{
			std::cout << z - x;
		}
		else std::cout << z - y;
	}
	else if ((x % 2 != 0) && (z % 2 != 0))
	{
		if (x < z)
		{
			std::cout << y - x;
		}
		else std::cout << y - z;
	}
	else if ((y % 2 != 0) && (z % 2 != 0))
	{
		if (y < z)
		{
			std::cout << x - y;
		}
		else std::cout << x - z;
	}

	return 0;
}