//1
/*#include <iostream>
int main() {
	int num;
	std::cin >> num;
	if (num == 0) {
		std::cout << "number is 0";
	}
	else if (num < 0) {
		std::cout << num << "" << "is negative";
	}
	else if (num > 0) {
		std::cout << num << "" << "is positive";
	}
}
//2
#include <iostream>
int main() {
	int num;
	std::cin >> num;
	if (num % 15 == 0) {
		std::cout << "FIZZBUM";
		return 0;

	}else	 if (num % 3 == 0) { std::cout << "FIZZ"; }
	else if (num % 5 == 0) { std::cout << "BUM"; }
}
//3
#include <iostream>
int main() {
	int num;
	std::cin >> num;
	switch (num) {
	case 1: std::cout << "I"; break;
	case 2: std::cout << "II"; break;
	case 3: std::cout << "III"; break;
	case 4: std::cout << "IV"; break;
	case 5: std::cout << "V"; break;
	case 6: std::cout << "VI"; break;
	case 7: std::cout << "VII"; break;
	case 8: std::cout << "VIII"; break;
	case 9: std::cout << "IX"; break;
	case 0: std::cout << "0"; break;
	defaut: std::cout << "?nvalid number";
	}
}
//4
#include <iostream>
int main() {
	char letter;
	std::cin >> letter;

	if(char(letter>='a' && letter<='z')){
	switch (letter) {
	case 'a': std::cout << char(letter - 'a' + 'A') << std::endl << "Volew"; break;
	case 'o': std::cout << char(letter - 'a' + 'A') << std::endl << "Volew"; break;
	case 'i': std::cout << char(letter - 'a' + 'A') << std::endl << "Volew"; break;
	case 'u': std::cout << char(letter - 'a' + 'A') << std::endl << "Volew"; break;
	case 'e': std::cout << char(letter - 'a' + 'A') << std::endl << "Volew"; break;
	default: std::cout << char(letter - 'a' + 'A') << std::endl << "Consonant";
	}
	}
	else if (char(letter >= 'A' && letter <= 'Z')) {
		switch (letter) {
		case 'A': std::cout << char(letter + 'a' - 'A') << std::endl << "Volew"; break;
		case 'O': std::cout << char(letter + 'a' - 'A') << std::endl << "Volew"; break;
		case 'I': std::cout << char(letter + 'a' - 'A') << std::endl << "Volew"; break;
		case 'U': std::cout << char(letter + 'a' - 'A') << std::endl << "Volew"; break;
		case 'E': std::cout << char(letter + 'a' - 'A') << std::endl << "Volew"; break;
		default: std::cout << char(letter + 'a' - 'A') << std::endl << "Consonant";
		}
	}
	else { std::cout << "Not a letter"; }
}
//5
#include <iostream>
int main() {
	double num1, num2;
	char operation;
	std::cin >> num1 >> operation >> num2;
	switch (operation) {
	case '+': std::cout << num1 + num2; break;
	case '-': std::cout << num1 - num2; break;
	case '*': std::cout << num1 * num2; break;
	case '/': std::cout << num1 / num2; break;
	default: std::cout << "Invalid operation";
	}
}
//6
#include <iostream>
int main() {
	int speed;
	std::cin >> speed;
	if (speed <= 10) { std::cout << "slow"; }
	else if (speed > 10 && speed <= 50) { std::cout << "average"; }
	else if (speed > 50 && speed <= 150) { std::cout << "fast"; }
	else if (speed > 150 && speed <= 1000) { std::cout << "very slow"; }
	else if (speed > 1000) { std::cout << "ultra fast"; }
}
//7
#include <iostream>
int main() {
	int year;
	std::cin >> year;
	if (year == 2025) {
		if (year % 100 == 0) { std::cout << year <<" "<< "is not a leap year"; }
		else if (year % 4 == 0) { std::cout << year <<" "<< "is a leap year"; }
		else if (year % 4 != 0) { std::cout << year << " "<<"is not a leap year"; }
	}
	if (year < 2025) {
		if (year % 100 == 0) { std::cout << year <<" "<< "was not a leap year"; }
		else if (year % 4 == 0) { std::cout << year <<" "<< "was a leap year"; }
		else if (year % 4 != 0) { std::cout << year << " "<<"was not a leap year"; }
	}
	if (year > 2025) {
		if (year % 100 == 0) { std::cout << year <<" "<< "will not a leap year"; }
		else if (year % 4 == 0) { std::cout << year << " "<<"will be a leap year"; }
		else if (year % 4 != 0) { std::cout << year << " "<<"will not a leap year"; }
	}
}
//8
#include <iostream>
int main() {
	int side1, side2, side3;
	std::cin >> side1 >> side2 >> side3;
	if (side1 + side2 > side3 && side2 + side3 > side1 && side2 + side3 > side1) {
		if (side1 == side2 == side3) {
			std::cout << "Triangle exists and it is equilateral.";}
		else if (side1 == side2 || side1==side3 || side2==side3) {
			std::cout << "Triangle exists and it is isosceles.";
		}
		else if (side1!=side2 && side1!=side3 && side2!=side3) {
			std::cout << "Triangle exists and it is scalene.";
		}
	}
	else { std::cout << "Triangle does not exist"; }
}
//9
#include <iostream>
int main() {
	int r, x, y;
	std::cin >> r >> x >> y;
	if (x * x + y * y < r * r) { std::cout << "Point is inside the circle."; }
	else 	if (x * x + y * y > r * r) { std::cout << "Point is ouside the circle."; }
	else { std::cout << "Point is on the circle."; }
}
//10
#include <iostream>
int main() {
	int x, y, x1, x2, y1, y2;
	std::cout << "Input the points coordinats:" << std::endl;
	std::cin >> x>> y;
	std::cout << "Input x1, y1, x2, y2:" << std::endl;
	std::cin >> x1>> y1>> x2>> y2;
	if (x1 == x2 || y1 == y2) { std::cout << "that is not a rectangle!"; return 0; }
	if ((x > x1 && x < x2) && ( y > y1 && y < y2)) {std::cout << "Point is inside the rectangle."; }
	else if ((x > x1 && x < x2) && (y < y1 && y > y2)) { std::cout << "Point is inside the rectangle."; }
	else if ((x < x1 && x > x2) && (y > y1 && y < y2)) { std::cout << "Point is inside the rectangle."; }
	else if ((x < x1 && x > x2) && (y < y1 && y > y2)) { std::cout << "Point is inside the rectangle."; }
	else { std::cout << "Point is outside the rectangle."; }
}
//11
#include <iostream>
int main() {
	char letter1, letter2, letter3, letter4, letter5;
	std::cout << "Input 5 five lettrs(first two must be capital):"<<std::endl;
	std::cin >> letter1 >> letter2 >> letter3 >> letter4 >> letter5;
	letter1 = char(letter1 - 'A' + 'a');
	letter2 = char(letter2 - 'A' + 'a');
	if (letter5 >= letter1 && letter5 <= letter2 || (letter5 >= letter3 && letter5 <= letter4))
		std::cout << "true" << std::endl;
	else std::cout << "false" << std::endl;
	if (letter5 >= letter1 && letter5 <= letter2 && (letter5 >= letter3 && letter5 <= letter4))
		std::cout << "true" << std::endl;
	else std::cout << "false" << std::endl;
	if (letter5 >= letter1 && letter5 <= letter2 && (letter5 <= letter3 && letter5 >= letter4))
		std::cout << "true" << std::endl << "true" << std::endl;
	else std::cout << "false" << std::endl << "false" << std::endl;
}*/
