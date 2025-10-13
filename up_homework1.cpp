#include <iostream>

//zad 1
/*int main()
{
	int n;
	std::cin >> n;
	int answer = 1 - n % 2;
	std::cout << answer;
	return 0;
}*/ 

//zad 2
/*int main()
{
	int n;
	std::cin >> n;
	int digit1, digit2, digit3;
	digit1 = n % 10;
	digit2 = (n / 10) % 10;
	digit3 = (n / 100) % 10;
	n = digit1 * 100 + digit2 * 10 + digit3;
	n++;
	std::cout << n;
	return 0;
}*/

//zad 3
//int main()
//{
//	int a, b;
//	std::cin >> a >> b;
//	int biggest = a > b ? a : b;
//	std::cout << biggest;
//
//}

//zad 4 
/*int main()
{
	int grade;
	std::cin >> grade;
	int result = (2 <= grade && grade <= 6) ? 1 : 0;
	std::cout << result;
}*/

//zad 5
/*int main()
{
	int n;
	std::cin >> n;
	int digit1;
	digit1 = n % 10;
	n = n/10;
	std::cout << n;
	return 0;
}*/

//zad 6
/*int main()
{
	int a,b;
	std::cin >> a >> b;
	int sum = a + b;
	int dist = a - b;
	int result = sum * sum * sum * sum;
	result = result - dist * dist;
	std::cout << result;
}*/


//zad 7
int main()
{
	int money;
	std::cin >> money;
	int hundreds = money / 100;
	money = money % 100;

	int fifties = money / 50;
	money = money % 50;

	int twenties = money / 20;
	money = money % 20;

	int fives = money / 5;
	money = money % 5;

	int twos = money / 2;
	money = money % 2;

	int ones = money;

	std::cout << hundreds << "x100lv "
		<< fifties << "x50lv "
		<< twenties << "x20lv "
		<< fives << "x5lv "
		<< twos << "x2lv "
		<< ones << "x1lv";

	return 0;
}