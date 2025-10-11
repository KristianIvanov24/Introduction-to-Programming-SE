#include <iostream>

int main()
{
    int time;
	std::cin >> time;

	int hours = time / 3600;
	int minutes = (time % 3600) / 60;
	int seconds = time % 60;
	std::cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;

	return 0;
}