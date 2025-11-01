#include <iostream>

const char SPACE = ' ';
const char STAR = '*';

int main()
{
    int n;
	std::cin >> n;

	if (n < 1) {
		std::cout << "Invalid input";
		return 0;
	}

	int starsCouunt = 0;
	for (int i = 0; i <= n; i++) {

		for(int j = 0; j < n - starsCouunt; j++) {
			std::cout << SPACE;
		}
		for (int j = 0; j < starsCouunt; j++) {
			std::cout << STAR;
		}

		std::cout << " | ";

		for (int j = 0; j < starsCouunt; j++) {
			std::cout << STAR;
		}

		std::cout << std::endl;
		starsCouunt++;
	}

	return 0;
}