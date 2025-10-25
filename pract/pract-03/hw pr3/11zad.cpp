#include <iostream>

const char interval = 'a' - 'A';
int main()
{
	char l1, l2, l3, l4, l5;
	bool isInUnion, isInIntersection, isInFirstDifference, isInDifference;
    std::cin >> l1 >> l2 >> l3 >> l4 >> l5;

	l1 += interval;
	l2 += interval;
	if (l5 >= 'A' && l5 <= 'Z') l5 += interval;

	isInUnion = (l5 >= l1 && l5 <= l2) || (l5 >= l3 && l5 <= l4);
	isInIntersection = (l5 >= l1 && l5 <= l2) && (l5 >= l3 && l5 <= l4);
	isInFirstDifference = (l5 >= l1 && l5 <= l2) && !(l5 >= l3 && l5 <= l4);
	isInDifference = isInUnion && !isInIntersection;

	std::cout << isInUnion << ", " << isInIntersection << ", " << isInFirstDifference << ", " << isInDifference;
	return 0;
}

