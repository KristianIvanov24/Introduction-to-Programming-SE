#include <iostream>

/*
	* Задача 6 : Ще казваме, че поредица от числа е трион, ако всяко число в нея е едновременно по-голямо или равно
	от двата си съседа или пък едновременно по-малко или равно от тях. За първия и последния елемент имаме само по един съсед. 
	Напишете програма, която въвежда от стандартния 5 на брой цели числа. Да се изведе на стандартния изход "yes", ако въведената поредица е трион,
	или "no", в противен случай.

	Вход: 1 5 1 0 3 , Изход: no

	Вход: -10 10 -2 11 -22 , Изход: yes
*/

int main()
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	if ((a <= b && b >= c && c <= d && d >= e)
		|| (a >= b && b <= c && c >= d && d <= e))
	{
		std::cout << "yes";
	}
	else
	{
		std::cout << "no";
	}

	return 0;
}
