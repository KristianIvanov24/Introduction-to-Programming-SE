#include <iostream>

//int main()
//{
//    int hours, minutes;
//    std::cin >> hours >> minutes;
//    minutes += 15;
//    if (minutes > 59)
//    {
//        minutes -= 60;
//        hours++;
//    }
//    if (hours > 23)
//    {
//        hours -= 24;
//    }
//    if (hours < 10) std::cout << "0";
//	std::cout << hours << ":";
//    if (minutes < 10) std::cout << "0";
//	std::cout << minutes;
//}

//int main()
//{
//    int a, b, c, d, e;
//	std::cin >> a >> b >> c >> d >> e;
//    if (
//        ((b >= a && b >= c) || (b <= a && b <= c)) &&
//        ((c >= b && c >= d) || (c <= b && c <= d)) &&
//        ((d >= c && d >= e) || (d <= c && d <= e))
//        )
//        std::cout << "yes";
//    else
//        std::cout << "no";
//
//}

//int main()
//{
//	int n;
//	std::cin >> n;
//	int digit1 = n % 10;
//	int digit2 = (n / 10) % 10;
//	int digit3 = (n / 100) % 10;
//	if (digit1 != digit2 && digit2 != digit3)
//	{
//		std::cout << "yes" << " ";
//		std::cout << digit1 * digit3;
//	}	
//	else
//	{
//		std::cout << "no" << " ";
//		std::cout << digit1 << digit2 << digit3;
//	}
//		
//}

//int main()
//{
//	int a, b, c;
//	std::cin >> a >> b >> c;
//
//    int maxEven = -1000000, minOdd = 1000000;
//    bool hasEven = false, hasOdd = false;
//
//    if (a % 2 == 0) 
//    { 
//        hasEven = true; 
//        if (a > maxEven) maxEven = a; 
//    }
//    else 
//    { 
//        hasOdd = true; 
//        if (a < minOdd) minOdd = a; 
//    }
//
//    if (b % 2 == 0) 
//    { 
//        hasEven = true; 
//        if (b > maxEven) maxEven = b; 
//    }
//    else 
//    { 
//        hasOdd = true; 
//        if (b < minOdd) minOdd = b; 
//    }
//
//    if (c % 2 == 0) 
//    { 
//        hasEven = true; 
//        if (c > maxEven) maxEven = c; 
//    }
//    else 
//    { 
//        hasOdd = true; 
//        if (c < minOdd) minOdd = c; 
//    }
//
//    if (hasEven && hasOdd)
//        std::cout << maxEven - minOdd;
//    else if (hasOdd)
//        std::cout << minOdd;
//    else
//        std::cout << maxEven;
//
//}

int main()
{
	int month, year;
	std::cin >> month >> year;
	if(1 == month || 3 == month || 5 == month || 7 == month || 8 == month || 10 == month || 12 == month)
	{
		std::cout << 31;
	}
	else if (4 == month || 6 == month || 9 == month || 11 == month)
	{
		std::cout << 30;
	}
	else
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			std::cout << 29;
		}
		else
		{
			std::cout << 28;
		}
	}
}