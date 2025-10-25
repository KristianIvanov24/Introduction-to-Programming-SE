#include <iostream>

int main()
{
	char figure, startPosLetter, endPosLetter;
	int startPosNumber, endPosNumber;
	std::cin >> figure >> startPosLetter >> startPosNumber >> endPosLetter >> endPosNumber;

	if(startPosLetter < 'a' || startPosLetter > 'h' || endPosLetter < 'a' || endPosLetter > 'h' ||
	   startPosNumber < 1 || startPosNumber > 8 || endPosNumber < 1 || endPosNumber > 8) {
		std::cout << "Invalid input";
		return 0;
	}

	if(startPosLetter == endPosLetter && startPosNumber == endPosNumber) {
		std::cout << "Invalid move";
		return 0;
	}

	
	switch (figure) {
		case 'P':
			if(startPosLetter == endPosLetter && abs(endPosNumber - startPosNumber) == 1) {
				std::cout << "Valid move";
			}
			else {
				std::cout << "Invalid move";
			}
			break;
		case 'K':
			if((abs(endPosLetter - startPosLetter) == 1 && abs(endPosNumber - startPosNumber) == 2) ||
			   (abs(endPosLetter - startPosLetter) == 2 && abs(endPosNumber - startPosNumber) == 1)) {
				std::cout << "Valid move";
			} 
			else {
				std::cout << "Invalid move";
			}
			break;
		case 'B':
			if(abs(endPosLetter - startPosLetter) == abs(endPosNumber - startPosNumber)) {
				std::cout << "Valid move";
			} 
			else {
				std::cout << "Invalid move";
			}
			break;
		case 'R':
			if(startPosLetter == endPosLetter || startPosNumber == endPosNumber) {
				std::cout << "Valid move";
			} else {
				std::cout << "Invalid move";
			}
			break;
		case 'Q':
			if (startPosLetter == endPosLetter || startPosNumber == endPosNumber ||
				abs(endPosLetter - startPosLetter) == abs(endPosNumber - startPosNumber)) {
				std::cout << "Valid move";
			}
			else {
				std::cout << "Invalid move";
			}
			break;
		case 'X':
			if ((abs(startPosLetter - endPosLetter) == 1 && abs(startPosNumber - endPosNumber) == 1) ||
				(startPosLetter == endPosLetter && abs(startPosNumber - endPosNumber) == 1)) {
				std::cout << "Valid move";
			}
			else {
				std::cout << "Invalid move";
			}
			break;
	}

	return 0;
}