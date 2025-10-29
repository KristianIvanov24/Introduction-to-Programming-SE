#include <iostream>

const int START_JAN_DATE = 1;
const int END_JAN_DATE = 31;

int main()
{

	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	bool isValidJanuaryDate = num >= START_JAN_DATE && num <= END_JAN_DATE;
	std::cout << isValidJanuaryDate;
}
