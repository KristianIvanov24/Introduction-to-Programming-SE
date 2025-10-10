#include <iostream>

int main()
{
	int nylon, paint, thinner, hours;
	std::cin >> nylon >> paint >> thinner >> hours;

	double materialCost = (nylon + 3) * 2.50 + (paint * 1.10) * 14.25 + thinner * 5.00 + 0.40;

	double laborCost = (materialCost * 0.30) * hours;

	double totalCost = materialCost + laborCost;

	std::cout << "Total cost: " << totalCost  << "lv." << std::endl;

	return 0;
}
