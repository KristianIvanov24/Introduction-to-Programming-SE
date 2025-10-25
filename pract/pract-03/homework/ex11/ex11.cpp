#include <iostream>

int main()
{
	char startSetA, endSetA, startSetB, endSetB, testLetter;
	std::cin >> startSetA >> endSetA >> startSetB >> endSetB >> testLetter;

	startSetA += 'a' - 'A';
	endSetA += 'a' - 'A';
	if(testLetter >= 'A' && testLetter <= 'Z') testLetter += 'a' - 'A';


	bool isInUnion = false, isInIntersection = false, isInDifference = false;


	if ((testLetter >= startSetA && testLetter <= endSetA) ||
		(testLetter >= startSetB && testLetter <= endSetB)) {
		isInUnion = true;
	}

	if (testLetter >= startSetA && testLetter <= endSetA &&
		testLetter >= startSetB && testLetter <= endSetB) {
		isInIntersection = true;
	}

	if (!isInIntersection && testLetter >= startSetA && testLetter <= endSetA) {
		isInDifference = true;
	}

	bool isPartOfOnlyOneSet = isInUnion && !isInIntersection;

	std::cout << isInUnion << ", " << isInIntersection << ", " << isInDifference << ", " << isPartOfOnlyOneSet;

    return 0;
}
