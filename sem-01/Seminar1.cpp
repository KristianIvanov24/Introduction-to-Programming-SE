#include <iostream>

int main()
{
	// zad 1
	/*int num;
	std::cin >> num;
	std::cout << (num % 2 == 0);*/

	// zad 2
	/*int n;
	std::cin >> n;
	std::cout << ((n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100)) + 1;*/

	// zad 3
	/*int a, b;
	std::cin >> a >> b;
	std::cout << (a * (a >= b) + b * (b > a));*/

	// zad 4
	/*int x;
	std::cin >> x;
	std::cout << ((x >= 2) && (x <= 6));*/

	// zad 5
	/*int num;
	std::cin >> num;
	std::cout << num / 10;*/

	// zad 6
	/*int a, b;
	std::cin >> a >> b;
	int sum = a + b;
	int diff = a - b;
	std::cout << (sum * sum * sum * sum) - (diff * diff);*/

	// zad 7
	int n;
	std::cin >> n;
	std::cout
		<< n / 100 << "x100lv "
		<< (n % 100) / 50 << "x50lv "
		<< ((n % 100) % 50) / 20 << "x20lv "
		<< (((n % 100) % 50) % 20) / 5 << "x5lv "
		<< ((((n % 100) % 50) % 20) % 5) / 2 << "x2lv "
		<< ((((n % 100) % 50) % 20) % 5) % 2 << "x1lv";
}
