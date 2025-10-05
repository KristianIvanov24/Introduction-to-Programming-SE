#include <iostream>

int main()
{
    int num;
	std::cin >> num;

	int digit1 = num / 100 + 1;
	int digit2 = (num / 10) % 10;
	int digit3 = num % 10;

	int result = digit3 * 100 + digit2 * 10 + digit1;
	std::cout << result << std::endl;

	return 0;
}
