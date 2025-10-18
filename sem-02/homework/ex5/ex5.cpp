#include <iostream>

int main()
{
    int month, year;
	std::cin >> month >> year;

	int days;

	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		days = 31;
	} 
	else if(month == 4 || month == 6 || month == 9 || month == 11) {
		days = 30;
	} 
	else if(month == 2) {

		if(year % 4 == 0) {
			days = 29;
		} else {
			days = 28;
		}

	}

	std::cout << days << std::endl;

	return 0;
}
