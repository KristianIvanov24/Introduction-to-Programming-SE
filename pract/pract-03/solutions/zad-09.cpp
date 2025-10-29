#include <iostream>

const double EPS = 0.000001; // EPSILON

int main()
{
	double r, x, y;
	std::cin >> r >> x >> y;
	double distance = sqrt(x * x + y * y);

    // Проверяваме дали два double са равни така,
    // защото в компютъра не се пазят точно, а приближено
    // Между всеки две ЦЕЛИ числа има безброй много реални,
    // а компютърът няма безкрайна памет
    // в повече случаи ни устройва да проверим дали числата са достатъчно близки с
    // някаква константа която ние си избираме.
    if (abs(distance - r) < EPS) {
        std::cout << "The point is inside the circle.";
    }
    else if (distance < r) {
        std::cout << "The point is on the circle.";
    }
    else {
        std::cout << "The point is outside the circle.";
    }
}