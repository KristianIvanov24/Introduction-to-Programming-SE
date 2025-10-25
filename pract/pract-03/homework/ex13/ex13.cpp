#include <iostream>

int main()
{
	int hours, minutes;
	std::cin >> hours >> minutes;

	if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
		std::cout << "Invalid time input.";
		return 0;
	}

	if (hours >= 12) hours -= 12;
	if (hours == 0) hours = 12;

	int mirrorHours, mirrorMinutes;

	if (minutes == 0) {
		mirrorHours = 12 - hours;
		mirrorMinutes = 0;
		if (mirrorHours == 0) {
			mirrorHours = 12;
		}
	}
	else {
		mirrorMinutes = 60 - minutes;
		mirrorHours = 11 - hours;

		if (mirrorHours <= 0) {
			mirrorHours += 12;
		}
	}

	if (mirrorHours < 10) std::cout << "0";
	std::cout << mirrorHours << ":";

	if (mirrorMinutes < 10) std::cout << "0";
	std::cout << mirrorMinutes;

	return 0;
}