#include <iostream>

int main()
{
    int n;
    std::cin >> n;

	int hundreds = n / 100;
	n -= hundreds * 100;

	int fifties = n / 50;
	n -= fifties * 50;

	int twenties = n / 20;
	n -= twenties * 20;

	int fives = n / 5;
	n -= fives * 5;

	int twos = n / 2;
	n -= twos * 2;

	int ones = n;
	std::cout << hundreds << "x100lv " << fifties << "x50lv " << twenties << "x20lv " << fives << "x5lv " << twos << "x2lv " << ones << "x1lv" << std::endl;

	return 0;
}