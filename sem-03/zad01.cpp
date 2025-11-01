#include <iostream>
int main()
{
	//Да се напише програма, която приема поток от числа. Числата се събират, докато не се въведе числото 0.
	//Тогава трябва да се отпечата акумулираният резултат и да програмата да приключи.
	int num, sum=0;
	std::cout << "Input numbers or enter 0 to exit: ";
	while (true)
	{
		std::cin >> num;
		if (num == 0)
			break;
		sum += num;
	}
	std::cout << sum;
}
