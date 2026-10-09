/*
Задача 6: Да се състави програма, която прочита две реални числа: C - температура в градуси Целзий (°C) и 
F - температура в градуси Фаренхайт (°F). Да се изведе дали двете температури са еднакви.

Преобразуването от °F към °C става по следната формула: °C = (°F − 32) × 5⁄9

Вход: 37 98.6, Изход: 1
*/

#include <iostream>
#include <cmath>

int main()
{
	double temperatureCelsius, temperatureFahrenheit;
	std::cin >> temperatureCelsius >> temperatureFahrenheit;

    double fahrenheitToCelsius = (temperatureFahrenheit - 32) * 5.0 / 9.0;

	std::cout << (fabs(temperatureCelsius - fahrenheitToCelsius) < 1e-9);

    /*
        Извикваме библиотеката #include <cmath>, с която можем да използваме fabs

        fabs - дава ни модула на ст-ст, т.е. fabs(-5) = fabs(5) = 5

        1e-9 - достатъчно малка ст-ст, чрез която можем да стигнем до заключение, 
        че две числа с плаваща запетая са равни

        Сравнения от типа 0.3 == 0.3 не трябва да се правят в С++
        Пр:
            #include <iostream>
            #include <iomanip>

            int main()
            {
                double a = 0.1;
                double b = 0.2;

                if (a + b == 0.3)
                    std::cout << "Equal" << std::endl;
                else
                    std::cout << "Not equal" << std::endl;

                std::cout << std::fixed << std::setprecision(20) << a + b;
            }
            
    */
   
	return 0;
}