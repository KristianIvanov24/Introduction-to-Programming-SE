#include <iostream>

const double NYLON_PRICE = 2.50;
const double PAINT_PRICE = 14.25;
const double THINNER_PRICE = 5.00;
const double BAG_PRICE = 0.40;
const double LABOUR_COEF = 0.3;

int main()
{
	double nylon, paint, thinner, labourHours;
	std::cout << "Enter nylon m^2, paint liters, thinner liters and labour hours: ";
	std::cin >> nylon >> paint >> thinner >> labourHours;

	nylon += 3;
	paint += paint * 0.10;

	double nylonPrice = nylon * NYLON_PRICE;
	double paintPrice = paint * PAINT_PRICE;
	double thinnerPrice = thinner * THINNER_PRICE;
	double materialsPrice = nylonPrice + paintPrice + thinnerPrice + BAG_PRICE;
	double labourPrice = materialsPrice * LABOUR_COEF * labourHours;

	std::cout << "Total cost: " << labourPrice + materialsPrice << " lv.";
}
