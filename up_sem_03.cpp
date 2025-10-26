#include <iostream>

//int main()
//{
//	int number;
//	int sum = 0;
//	do 
//	{
//		std::cin >> number;
//		sum += number;
//
//	} while (number != 0);
//    std::cout << sum;
//}


//int main()
//{
//	int a, b, c, d, e;
//	std::cin >> a >> b >> c >> d >> e;
//	for (int i = -100; i <= 100; ++i)
//	{
//		int fx = a * pow(i, 4) + b * pow(i, 3) + c * pow(i, 2) + d * i + e;
//		if(fx == 0 || fx > 0)
//		{
//			std::cout << i << " ";
//		}
//	}
//}

//int main()
//{
//	int number;
//	std::cin >> number;
//	int temp = number;
//	int commonDigit = 0, smallestDigit = 0;
//    for (int d = 0; d <= 9; d++) {
//        temp = number;
//        int count = 0;
//        while (temp > 0) {
//            if (temp % 10 == d) count++;
//            temp /= 10;
//        }
//
//        if (count > smallestDigit || (count == smallestDigit && d < commonDigit)) {
//            smallestDigit = count;
//            commonDigit = d;
//        }
//    }
//
//	std::cout << commonDigit;   
//}



//int main()
//{
//	int m, n;
//	std::cin >> m >> n;
//	int count = 0;
//
//    for (int i = m; i <= n; ++i) {
//        int x = i;
//        bool different = true; 
//
//        while (x > 0 && different) {
//            int d = x % 10;      
//            int y = x / 10;      
//
//            while (y > 0) {
//                if (y % 10 == d) {
//                    different = false;
//                    break;
//                }
//                y /= 10;
//            }
//
//            x /= 10;
//        }
//
//        if (different)
//            count++;
//    }
//
//    std::cout << count;
//	
//}

//int main()
//{
//	int n;
//	std::cin >> n;
//	int mid = n / 2;
//
//	for(int i = 0; i < n; i++)
//	{ 
//		int stars, spaces;
//
//		if(i <= mid)
//		{
//			spaces = i;
//			stars = n - 2 * i;
//		}
//		else
//		{
//			spaces = n - i - 1;
//			stars = 2 * (i - mid) + 1;
//		}
//
//		for(int j = 0; j < spaces; j++)
//		{
//			std::cout << " ";
//		}
//		for(int k = 0; k < stars; k++)
//		{
//			std::cout << "*";
//		}
//		std::cout << std::endl;
//	}
//}


//int main()
//{
//	int n;
//	std::cin >> n;
//
//	int num = 1;
//
//	for (int i = 0; i < n; ++i)
//	{
//		if (i % 2 == 0)
//		{
//			for (int j = 0; j < n; ++j) 
//			{
//				std::cout << num << " ";
//				num++;
//			}
//		}
//		else
//		{
//			int start = num + n - 1;
//			for(int j = 0; j < n; ++j)
//			{
//				std::cout << start - j << " ";
//			}
//			num += n;
//		}
//		std::cout << std::endl;
//	}
//}


int main()
{
    int n;
    std::cin >> n;
	bool isEven = false;
    if (n % 2 == 0)
    {
		isEven = true;
    }
    int middle = n / 2;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; j++) 
        {
            if (i == 1 || i == n || j == 1 || j == n)
                std::cout << ". ";
            else
                std::cout << "  ";
        }

        for (int j = 1; j <= n; j++) 
        {
            if (i == n / 2 + 1 || i == n / 2)  
                std::cout << ". ";
            else
                std::cout << "  ";
        }

        for (int j = 1; j <= n; j++) 
        {
            if (i == 1 || i == n || j == 1 || j == n)
                std::cout << ". ";
            else
                std::cout << "  ";
        }

        std::cout << "\n";
    }
}