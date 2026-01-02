//zad1
//Да се напише програма, която въвежда час и минути от 24 - часово денонощие и изчислява колко ще е часът след 15 минути.
//Резултатът да се отпечата във формат hh : mm.Часовете винаги са между 0 и 23, а минутите винаги са между 0 и 59. 
//Часовете и минутите се изписват винаги с по две цифри, с водеща нула когато е необходимо
//short hour, minute;
//std::cin >> hour >> minute;
//if (hour < 0 || hour>23 || minute < 0 || minute>59) {
//	std::cout << "Invalid input";
//	return 0;
//}
//minute += 15;
//hour += minute / 60;
//minute = minute % 60;
//if (hour == 24)hour = 0;
//if (hour < 10 && minute < 10)std::cout << 0 << hour << ":" << 0 << minute;
//else if (hour < 10)std::cout << 0 << hour << ":" << minute;
//else if (minute < 10)std::cout << hour << ":" << 0 << minute;
//else std::cout << hour << ":" << minute;

//zad2
//Ще казваме, че поредица от числа е трион, ако всяко число в нея е едновременно поголямо или равно от двата си съседа
//или пък едновременно по - малко или равно от тях.За първия и последния елемент имаме само по един съсед.Напишете програма, 
//която въвежда от стандартния 5 на брой цели числа.Да се изведе на стандартния изход "yes", 
//ако въведената поредица е трион, или "no", в противен случай.
	//int num1, num2, num3, num4, num5;
	//std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
	//if (((num2 >= num1 && num2 >= num3) || (num2 < num1 && num2 < num3)) &&
	//	((num3 >= num2 && num3 >= num4) || (num3 < num2 && num3 < num4)) &&
	//	((num4 >= num3 && num4 >= num5) || (num4 < num3 && num4 < num5))
	//	)std::cout << "yes";
	//else std::cout << "no";

//zad3
//Да се напише програма, която въвежда от клавиатурата трицифрено число n. 
//Програмата да проверява дали цифрите му са различни. Ако са различни, да извежда "yes" и произведението от първата и третата цифра на числото, 
//в протиовен случай - "no" и числото в обратен ред на цифрите му.
	//short n;
	//std::cin >> n;
	//short digit3 = n % 10;
	//n /= 10;
	//short digit2 = n % 10;
	//short digit1 = n / 10;
	//if (digit3 != digit2 && digit3 != digit1 && digit2 != digit1)std::cout << "yes " << digit1 * digit3;
	//else std::cout << "no " << digit3 << digit2 << digit1;

//zad4 
//Да се напише програма, която въвежда от клавиатурата три цели числа, различни от нула. 
//Програмата да извежда разликата между максималното четно и минималното нечетно число от тях. Ако въведените числа са само нечетни, 
//да извежда миниланото от тях. Ако са сано четни - максималното от тях.
	//int num1, num2, num3;
	//std::cin >> num1 >> num2 >> num3;
	//if (num1 == 0 || num2 == 0 || num3 == 0) 
	//{
	//	std::cout << "Invalid number";
	//	return 0;
	//}
	//int maxEven=1, minOdd=2;
	//if (num1 % 2)minOdd = num1;
	//else maxEven = num1;
	//if (num2 % 2)
	//{
	//	if (num2 < minOdd)minOdd = num2;
	//	if (minOdd % 2 == 0)minOdd = num2;
	//}
	//else 
	//{
	//	if (num2 > maxEven)maxEven = num2;
	//	if (maxEven % 2)maxEven = num2;
	//}
	//if (num3 % 2)
	//{
	//	if (num3 < minOdd)minOdd = num3;
	//	if (minOdd % 2 == 0)minOdd = num3;
	//}
	//else
	//{
	//	if (num3 > maxEven)maxEven = num3;
	//	if (maxEven % 2)maxEven = num3;
	//}
	//if (maxEven % 2)std::cout << minOdd;
	//else if (minOdd % 2 == 0)std::cout << maxEven;
	//else std::cout << maxEven - minOdd;

#include <iostream>
int main()
{
//zad5
//Да се напише програма, която по зададен месец и година, въведени от клавиатурата, определя броя на дните в този месец.
	short month, year;
	std::cin >> month >> year;
	if (month > 12 || month < 1 || year == 0)
	{
		std::cout << "Invalid input";
		return 0;
	}
	switch (month) {
	case1:
	case3:
	case5:
	case7:
	case8:
	case10:
	case12:std::cout << 31; break;
	case4:
	case6:
	case9:
	case11:std::cout << 30; break;
	case2: {
		if (year % 400)
		{
			std::cout << 29;
			return 0;
		}
		if (year % 100)
		{
			std::cout << 28;
			return 0;
		}
		if (year & 4)
		{
			std::cout << 29;
			return 0;
		}
		std::cout << 28;
	}break;
	}
}
