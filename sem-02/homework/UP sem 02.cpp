

#include <iostream>

int main()
{
	//1

	/*int hours, minutes;
	std::cin >> hours >> minutes;

	minutes += 15;

	if (minutes >= 60)
	{
		minutes -= 60;
		hours += 1;
	}

	if (hours >= 24)
	{
		hours = 0;
	}

	if (hours < 10)
	{
		std::cout << "0";
	}

	std::cout << hours << ":";

	if (minutes < 10)
	{
		std::cout << "0";
	}
	std::cout << minutes << std::endl;*/


	//2

	/*int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	bool isTrion = true;

	if ((b > a && b < c) || (b<a && b>c))
	{
		isTrion = false;
		
	}
	else if ((c > b && c < d) || (c<b && c>d))
	{
		isTrion = false;
		
	}
	else if ((d > c && d < e) || (d < c && d > e))
	{
		isTrion = false;
		
	}

	if (isTrion)
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}*/


	//3

	/*int n;
	std::cin >> n;

	int firstDigit = n / 100;
	int secondDigit = (n / 10) % 10;
	int thirdDigit = n % 10;

	if (firstDigit == secondDigit ||  secondDigit == thirdDigit || firstDigit == thirdDigit)
	{
		
		std::cout << "No " << thirdDigit << secondDigit << firstDigit << std::endl;

	}
	else
	{
		std::cout << "Yes " << firstDigit * thirdDigit << std::endl;
	}*/


	//4

	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;
	bool isNum1Even = false, isNum2Even = false, isNum3Even = false;
	int min = 0, max = 0;


	if (num1 % 2 == 0)
	{
		isNum1Even = true;
	}

	if ((num2 % 2) == 0)
	{
		isNum2Even = true;
	}

	if (num3 % 2 == 0)
	{
		isNum3Even = true;
	}

	if (isNum1Even)
	{
		max = num1;
	}
	else
	{
		min = num1;
	}

	if (isNum2Even)
	{
		if ( max != 0 && num2 > max)
		{
			max = num2;
		}
		else if (max == 0)
		{
			max = num2;
		}
	}
	else
	{
		if ( min!= 0 && num2<min)
		{
			min = num2;
		}
		else  if (min == 0)
		{
			min = num2;
		}
	}


	if (isNum3Even)
	{
		if ( max != 0 && num3 > max)
		{
			max = num3;
		}
		else if (max == 0)
		{
			max = num3;
		}
	}
	else
	{
		if (min != 0 && num3 < min)
		{
			min = num3;
		}
		else if (min == 0)
		{
			min = num3;
		}
	}

	if (isNum1Even && isNum2Even && isNum3Even)
	{
		std::cout << max;
		return 0;
	}
	else if (!isNum1Even && !isNum2Even && !isNum3Even)
	{
		std::cout << min;
		return 0;
	}
	else
	{
		std::cout << max - min;
	}


	//5


	int month;
	int year;

	std::cin >> month >> year;

	if (month == 1)
	{
		std::cout << "31" << std::endl;
	}
	else if (month == 2)
	{
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		{
			std::cout << "29" << std::endl;
		}
		else
		{
			std::cout << "28" << std::endl;
		}
	}
	else if (month == 3)
	{
		std::cout << "31" << std::endl;
	}
	else if (month == 4)
	{
		std::cout << "30" << std::endl;
	}
	else if (month == 5)
	{
		std::cout << "31" << std::endl;
	}
	else if (month == 6)
	{
		std::cout << "30" << std::endl;
	}
	else if (month == 7)
	{
		std::cout << "31" << std::endl;
	}
	else if (month == 8)
	{
		std::cout << "31" << std::endl;
	}
	else if (month == 9)
	{
		std::cout << "30" << std::endl;
	}
	else if (month == 10)
	{
		std::cout << "31" << std::endl;
	}
	else if (month == 11)
	{
		std::cout << "30" << std::endl;
	}
	else if (month == 12)
	{
		std::cout << "31" << std::endl;
	}



}

