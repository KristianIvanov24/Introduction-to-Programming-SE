#include <iostream>

int main()
{
    int a, b;
	std::cin >> a >> b;

	int res = (a + b) * (a + b) * (a + b) * (a + b) - (a - b) * (a - b);
	std::cout << res << std::endl;

	return 0;
}