#include <iostream>

/*
Задача 4 (Лице на фигура): Да се напише програма, която въвежда размерите на геометрична фигура и пресмята лицето й. Фигурите са четири вида: 
квадрат (s), правоъгълник (r), кръг (c) и триъгълник (t). На първия ред на входа се чете вида на фигурата (square, rectangle, circle или triangle). 
Ако фигурата е квадрат, на следващия ред се чете едно число – дължина на страната му. Ако фигурата е правоъгълник, на следващите два реда четат две числа – 
дължините на страните му. Ако фигурата е кръг, на следващия ред чете едно число – радиусът на кръга. Ако фигурата е триъгълник, на следващите два реда четат две числа – 
дължината на страната му и дължината на височината към нея.

Вход: s 5 , Изход: 25

Вход: r 7 2.5, Изход: 17.5

Вход: c 6, Изход: 113.04
 */


const double PI = 3.14;
const int TRIANGLE_AREA_DIVISOR = 2;

int main()
{
	// Solution 1 using if - else if - else
	{
		char figure;
		std::cin >> figure;

		if (figure == 's')
		{
			double side;
			std::cin >> side;
			std::cout << side * side << std::endl;
		}
		else if (figure == 'r')
		{
			double sideA, sideB;
			std::cin >> sideA >> sideB;
			std::cout << sideA * sideB << std::endl;
		}
		else if (figure == 'c')
		{
			double radius;
			std::cin >> radius;
			std::cout << PI * radius * radius << std::endl;
		}
		else if (figure == 't')
		{
			double width;
			double height;
			std::cin >> width >> height;
			std::cout << width * height / TRIANGLE_AREA_DIVISOR << std::endl;
		}
		else
		{
			std::cout << "Invalid figure!" << std::endl;
		}
	}
	
	// Solution 2 using switch-case
	{
		char figure;
		std::cin >> figure;
		switch (figure)
		{
		case 's':
		{
			double side;
			std::cin >> side;
			std::cout << side * side << std::endl;
			break;
		}
		case 'r':
		{
			double sideA, sideB;
			std::cin >> sideA >> sideB;
			std::cout << sideA * sideB << std::endl;
			break;
		}
		case 'c':
		{
			double radius;
			std::cin >> radius;
			std::cout << PI * radius * radius << std::endl;
			break;
		}
		case 't':
		{
			double width;
			double height;
			std::cin >> width >> height;
			std::cout << width * height / TRIANGLE_AREA_DIVISOR << std::endl;
			break;
		}
		default:
			std::cout << "Invalid figure!" << std::endl;
			break;
		}
	}

	return 0;
}

