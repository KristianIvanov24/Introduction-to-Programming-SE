#include<iostream>

//Задача 10
//int main()
//{
//	int a, b, c, d;
//	std::cin >> a >> b >> c >> d;
//
//	std::cout << ((b - a) == (c - b) &&  (c - b) == (d - c)) ? 1 : 0;
//	return 0;
//
// }

//Задача 11

//int main()
//{
//	int a, b, c, d;
//	std::cin >> a >> b >> c >> d;
//	std::cout << ((b / a) == (c / b) &&  (c / b) == (d / c)) ? 1 : 0;
//	return 0;
//}

//Задача 12

//int main()
//{
//	double r;
//	std::cin >> r;
//	std::cout << "Perimeter: " << 2 * 3.14 * r << "\n" << "Area: " << 3.14 * r * r;
//	return 0;
//}

//Задача 13

//int main()
//{
//	int a, b;
//	std::cin >> a >> b;
//	int perimeter = (a + b) * 2;
//	int area = a * b;
//	std::cout << "Peremeter: " << perimeter << std::endl;
//	std::cout << "Area: " << area << std::endl;
//	std::cout << "Is square: " << (a == b) ? 1 : 0;
//	return 0;
//}

//Задача 14

//int main()
//{
//	int time;
//	std::cin >> time;
//	int hours = time / 3600;
//	time = time % 3600;
//
//	int minutes = time / 60;
//	time = time % 60;
//
//	std::cout << hours << " hours "
//				<< minutes << " minutes "
//				<< time << " seconds";
//
//}

//Задача 15

//int main()
//{
//	int n;
//	std::cin >> n;
//
//	int a = n / 1000;
//	int b = (n / 100) % 10;
//	int c = (n / 10) % 10;
//	int d = n % 10;
//
//	std::cout << ((a == d && b == c) ? 1 : 0);
//
//	return 0;
//}

//Задача 16

//int main()
//{
//	int x, y;
//	std::cin >> x >> y;
//	int hypotenuse = sqrt(x * x + y * y);
//	std::cout << hypotenuse;
//	return 0;
//}

// Допълнителни задачи

//int main()
//{
//	int budget;
//	std::cin >> budget;
//	int cake = budget * 0.2;
//	int drinks = cake * 0.55;
//	int animator = budget / 3;
//	budget = budget + cake + drinks + animator;
//	std::cout << budget;
//	return 0;
//}

int main()
{
    double nylon, paint, thinner, working_hours;
    std::cin >> nylon >> paint >> thinner >> working_hours;
    nylon = (nylon + 3) * 2.50;
    paint = (paint + paint * 0.1) * 14.25;
    thinner = thinner * 5.00;
    double matirials = nylon + paint + thinner + 0.4;
    working_hours = matirials * 0.3 * working_hours;
    std::cout << "Total cost: " << working_hours + matirials << "lv.";
    return 0;
}
