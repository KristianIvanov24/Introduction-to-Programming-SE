#include <iostream>

int main()
{
	int hours, minutes;
	std::cin >> hours >> minutes;

	if ((hours >= 0) && (hours <= 23) && (minutes >= 0) && (minutes <= 59))
	{
		if (hours / 10 == 0)
		{
			if (minutes / 10 == 0)
			{
				std::cout << "0" << hours << ":" << minutes + 15;
			}
			else
			{
				minutes += 15;
				if (minutes >= 60)
				{
					minutes -= 60;
					
					if (minutes / 10 == 0)
					{
						if (hours == 9)
						{
							std::cout << hours + 1 << ":" << "0" << minutes;
						}
						else
						{
							std::cout << "0" << hours + 1 << ":" << "0" << minutes;
						}
					}
					else
					{
						if (hours == 9) std::cout << hours + 1 << ":" << minutes;
						else std::cout << "0" << hours + 1 << ":" << minutes;
					}
				}
				else std::cout << "0" << hours << ":" << minutes;
			}
		}
		else
		{
			if (minutes / 10 == 0)
			{

				std::cout << hours << ":" << minutes + 15;
			}
			else
			{
				minutes += 15;
				if (minutes >= 60)
				{
					minutes -= 60;

					if (minutes / 10 == 0)
					{
						if (hours == 23)
						{
							std::cout << "00:" << "0" << minutes;
						}
						else
						{
							std::cout << hours + 1 << ":" << "0" << minutes;
						}
					}
					else
					{
						if (hours == 23) std::cout << "00:" << minutes;
						else std::cout << hours + 1 << ":" << minutes;
					}
				}
				else std::cout << hours << ":" << minutes;
			}
			return 0;
		}
	}
	else std::cout << "Invalid data";
	
	return 0;
}