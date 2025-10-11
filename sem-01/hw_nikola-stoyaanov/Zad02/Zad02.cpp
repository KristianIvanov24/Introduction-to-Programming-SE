#include <iostream>

int main()
{
	int n, revN;
	std::cin >> n;
	revN = 100 * (n % 10) + 10 * ((n / 10) % 10) + n / 100;
	std::cout << ++revN;
	return 0;
}
