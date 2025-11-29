#include <iostream>
int main()
{
	//Въвеждат се 5 цели числа - a,b,c,d, e. Разглеждаме полинома f(x) = a * x^4 + b * x^3 + c* x^2 + d * x + e. 
	//Отпечатайте всички цели решения на f(x) >= 0 където x e в интервала [-100, 100]
	int a, b, c, d, e;
	std::cout << "input 5 integers: ";
	std::cin >> a >> b >> c >> d >> e;
	for (int i = -100; i <= 100; i++) 
	{
		if (a * std::pow(i, 4) + b * std::pow(i, 3) + c * std::pow(i, 2) + d * i + e >= 0)
			std::cout << i << ' ';
	}
}
