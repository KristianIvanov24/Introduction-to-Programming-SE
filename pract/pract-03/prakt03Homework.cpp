#include <iostream>

int main() {
	//zad1
	//Напишете програма, която приема число и показва дали е положително, отрицателно или нула.
	//double number;
	//std::cout << "Input number: ";
	//std::cin >> number;
	//if (number < 0)
	// std::cout << number << " is negative";
	//else if (number > 0)
	// std::cout << number << " is positive";
	//else 
	// std::cout << "Number" << " is zero";

	//zad2
	//Да се напише програма, която чете цяло число от конзолата. Ако числото се дели на 3, програмата извежда “FIZZ” на екрана.
	//Ако числото се дели на 5, програмата извежда “BUZ” на екрана. 
	//Ако числото се дели на 15, тогава програмата извежда “FIZZBUZ” на екрана.
	//int number;
	//std::cout << "Input number: ";
	//std::cin >> number;
	//if (number % 3 == 0)std::cout << "FIZZ";
	//if (number % 5 == 0)std::cout << "BUZ";

	//zad3
	//Да се напише програма, която чете от конзолата между 0 и 9 и отпечатва съответстващата му римска цифра.
	//int number;
	//std::cout << "Input number: ";
	//std::cin >> number;
	//switch (number) 
	//{
	//case 3:std::cout << "I";
	//case 2:std::cout << "I";
	//case 1:std::cout << "I"; break;
	//case 4:std::cout << "I";
	//case 5:std::cout << "V"; break;
	//case 6:std::cout << "VI"; break;
	//case 7:std::cout << "VII"; break;
	//case 8:std::cout << "VIII"; break;
	//case 9:std::cout << "IX"; break;
	//default:std::cout << "number out of range";
	//}

	//zad4
	//Да се напише програма, която чете от конзолата символ и, ако е малка буква, извежда съответната голяма, ако е голяма буква,
	// извежда съответната малка,
	// а ако не е буква, да изведе съобщение за невалиден символ. Ако е буква, да се изведе и дали е гласна или съгласна.
	//char character;
	//std::cout << "Input character: ";
	//std::cin >> character;
	//int dif = 'A' - 'a';
	//if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
	//{
	//	if (character >= 'a' && character <= 'z') 
	//		character += dif;
	//	else 
	//		character -= dif;
	//	std::cout << character << std::endl;
	//	if (character == 'A' || character == 'E' || character == 'I' || character == 'O' ||
	//		character == 'U' || character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
	//			std::cout << "Vowel";
	//	else 
	//		std::cout << "Consonant";
	//}
	//else 
	//		std::cout << "Invalid character";

	//zad5
	//Напишете програма калкулатор, поддържащ операциите +, -, *, / на две реални числа.
	//От конзолата се прочита число, операция и второ число и се извежда резултатът.
	/*double num1, num2;
	char op;
	std::cin >> num1 >> op >> num2;
	switch (op) {
	case '+':std::cout << num1 + num2; break;
	case '-':std::cout << num1 - num2; break;
	case '*':std::cout << num1 * num2; break;
	case '/':
	{
		if (num2 == 0)
			std::cout << "cannot divide by 0";
		else
			std::cout << num1 / num2;
	}
	default:std::cout << "Invalid operator";
	}*/

	//zad6
	//Да се напише програма, която въвежда скорост и отпечатва информация за скоростта. 
	//При скорост до 10 (включително) отпечатайте “slow”. При скорост над 10 и до 50 отпечатайте “average”. 
	//При скорост над 50 и до 150 отпечатайте “fast”. При скорост над 150 и до 1000 отпечатайте “ultra fast”. 
	//При по-висока скорост отпечатайте “extremely fast”
	/*double speed;
	std::cout << "Input speed: ";
	std::cin >> speed;
	if (speed <= 10)
		std::cout << "slow";
	else if (speed <= 50)
		std::cout << "average";
	else if (speed <= 150)
		std::cout << "fast";
	else if (speed <= 1000)
		std::cout << "ultra fast";
	else
		std::cout << "extremely fast";*/

		//zad7 Въведете цяло положително число в конзолата - година. Ако годината е високосна, програмaта отпечатва в конзолата: “ 
		// [вашата година] [was/ is/ will be] a leap year! ” в зависимост дали е в миналото, текущата или в бъдещето. 
		// Аналогично, да се отпечата “ [вашата година] [wasn’t/ isn’t/ won’t be] a leap year! ”.
		/*int year,curYear=2025;
		std::cout << "Input year: ";
		std::cin >> year;
		bool isLeapYear;
		if (year % 400 == 0)
			isLeapYear = true;
		else if (year % 100 == 0)
			isLeapYear = false;
		else if (year % 4 == 0)
			isLeapYear = true;
		else
			isLeapYear = false;
		if (year == curYear)
		{
			if (isLeapYear)
				std::cout << year << " is a leap year";
			else
				std::cout << year << " isn't a leap year";
		}
		else if (year > curYear)
		{
			if (isLeapYear)
				std::cout << year << " will be a leap year";
			else
				std::cout << year << " won't be a leap year";
		}
		else
		{
			if (isLeapYear)
				std::cout << year << " was a leap year";
			else
				std::cout << year << " wan't a leap year";
		}
		*/

		//zad8 
		//Напишете програма, която проверява дали съществува триъгълник със страни a, b, c и какъв е той (equilateral, isosceles, scalene).
	/*double SideA, SideB, SideC;
	std::cout << "Input 3 sides of a triangle: ";
	std::cin >> SideA >> SideB >> SideC;
	if (SideA <= 0 || SideB <= 0 || SideC <= 0)
	{
		std::cout << "Incorrect values: ";
		return 0;
	}
	if (SideA >= SideB + SideC || SideB >= SideA + SideC || SideC >= SideB + SideA)
	{
		std::cout << "Triangle does not exist.";
		return 0;
	}
	std::cout << "Triangle exists and it is ";
	if (SideA == SideB && SideB == SideC)
		std::cout << "isosceles.";
	else if (SideA != SideB && SideB != SideC && SideA != SideC)
		std::cout << "scalene.";
	else
		std::cout << "equilateral.";*/

		//zad9
		//Да се напише програма, която при подадени радиус r и двумерна точка (х, у) 
		//проверява дали точката се намира вътре/извън или по контура на окръжност с център (0,0).
			//double r,x,y;
			//std::cout << "Input radius and coordinates: ";
			//std::cin >> r >> x >> y;
			//if (r <= 0)
			//{
			//	std::cout << "Invalid radius";
			//	return 0;
			//}
			//std::cout << "Point is ";
			//if (x * x + y * y == r * r)
			//	std::cout << "on";
			//else if (x * x + y * y > r * r)
			//	std::cout << "outside";
			//else
			//	std::cout << "inside";
			//std::cout << " the circle";

		//zad10 
		//Напишете програмата, която проверява дали точка {x, y} се намира вътре в правоъгълник {x1, y1} - {x2, y2}. 
		//Имайте навпредвид, че НЕ е гарантирано x1 < x2 и y1 < y2.
	//int x, y;
	//std::cout << "Input x and y: ";
	//std::cin >> x >> y;
	//int x1, y1, x2, y2;
	//std::cout << "Input x1, y1, x2, y2: ";
	//std::cin >> x1 >> y1 >> x2 >> y2;
	//if (x1 > x2)
	//{
	//	x1 += x2;
	//	x2 = x1-x2;
	//	x1 -= x2;
	//}
	//if (y1 > y2)
	//{
	//	y1 += y2;
	//	y2 = y1 - y2;
	//	y1 -= y2;
	//}
	//if (x >= x1 && x <= x2 && y >= y1 && y <= y2)
	//	std::cout << "Point is inside the rectangle";
	//else
	//	std::cout << "Point is outside the rectangle";

	//zad11
	//Да се напише програма, която получава 5 латински букви. Първите две от тях са главни и образуват множеството A, 
	//където A съдържа всички букви между въпросните две букви, включително самите тях. 
	//Вторите две букви са малки и образуват множеството B, където B съдържа всички букви между тях, включително самите тях.
	//Четем 5 - та буква(case insensitive).Да се изведе :
	//
	//Дали 5 - тата буква принадлежи на обединението на A и B.
	//Дали 5 - тата буква принадлежи на сечението на A и B.
	//Дали 5 - тата буква принадлежи на разликата на A с B.
	//Без да използвате допълнителни проверки(освен резултатите от предните три условия) 
	//определете дали 5 - тата буква принадлежи само и единствено в някое от множествата A или B.
	//!!!Не правим разлика между малки и главни букви в множествата, т.е.не правим разлика между 'А' и 'а', 'B' и 'b'.
	//!Просто първото множество се въвежда от конзолата като главни букви, а второто - като малки.
	//!Съответно 'А' - 'C' и 'b' - 'd' имат сечение{ b, c }
	/*char ch1, ch2, ch3, ch4, ch5;
	std::cout << "Input 5 letters: ";
	std::cin >> ch1 >> ch2 >> ch3 >> ch4 >> ch5;
	int dif = 'a' - 'A';
	if (ch5 > 'A' && ch5 < 'Z')
		ch5 += dif;
	ch1 += dif;
	ch2 += dif;
	bool unification;
	if (ch5 >= ch1 && ch5 <= ch2 || ch5 >= ch3 && ch5 <= ch4)
		unification = true;
	else
		unification = false;
	bool intersection;
	if (ch5 >= ch1 && ch5 <= ch2 && ch5 >= ch3 && ch5 <= ch4)
		intersection = true;
	else
		intersection = false;
	bool difference;
	if (ch5 >= ch1 && ch5 <= ch2 && !(ch5 >= ch3 && ch5 <= ch4))
		difference = true;
	else
		difference = false;
	bool isInOneSet;
	if (unification && !intersection)
		isInOneSet = true;
	else
		isInOneSet = false;
	std::cout << unification << ", " << intersection << ", " << difference << ", " << isInOneSet;*/

	//zad13
	//Напишете програма, която приема време във формат hh mm (24-часов формат) и връща „огледалното време“. 
	//Огледалното време е това, което би показал часовникът, ако го гледате в огледало.

	//Ако резултатът излезе извън 12 часа, коригирайте според аналогов часовник(12 - часов модел, не 24 - часов).
	int hour, minute;
	std::cout << "Input hours and minutes: ";
	std::cin >> hour >> minute;
	if (hour < 0 || hour>23 || minute < 0 || minute>59)
	{
		std::cout << "Invalid values";
		return 0;
	}
	if (hour > 12)
		hour -= 12;
	int newHour = 12 - hour;
	if (newHour == 0)
		newHour = 12;
	int newMinute = 60 - minute;
	if (newMinute == 60)
		newMinute = 0;
	if (newHour < 10)
		std::cout << '0';
	std::cout << newHour<<':';
	if (newMinute < 10)
		std::cout << '0';
	std::cout << newMinute;

}
