#include <iostream>

int main()
{
    int x, y;
	std::cin >> x >> y;

	int distanceToCenter = sqrt((x * x) + (y * y));

	std::cout << distanceToCenter << std::endl;

	return 0;
}
