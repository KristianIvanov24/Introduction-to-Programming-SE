// hw-sem-03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//const double EPS = 1e-9;
int main()
{
    //zad-1zad
    /*
    double x, step, target;
    std::cin >> x >> step >> target;
    while (true)
    {
    if (step == 0)
    {
        if (x == target)
        {
            std::cout << "Reached" << std::endl;
        }
        else
        {
            std::cout << "Exceeded" << std::endl;
        }
        else
        {
        x += step;
        if (std::abs(x - target) < EPS)
        {
            std::cout << "Reached";
            break;
        }

        if ((step > 0 && x > target) || (step < 0 && x < target))
        {
            std::cout << "Exceed";
            break;
        }
        }
    }
    */
    //zad-2zad
    /*
    int number;
    bool isPrime=true;
    int end = sqrt(number);
    std::cin >> number;
    for (int i = 2;i <= end;i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
        }
    }
    if (isPrime)
    {
        std::cout << "Prime";
    }
    else
        std::cout << "Not prime";
    */
    //zad-zad3
    /*
    int number;
    bool isPrime = true;
    int multiplier = 0;
    std::cin >> number;
    for (int i = number;i > 1;i--)
    {
        for (int j = 2;j <= sqrt(i);j++)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (!isPrime)
            continue;
        int count = 0;
        while (number % i == 0)
        {
            count++;
            number /= i;
        }
        if (count >= 1)
        {
            std::cout << i << "^" << count<<" ";
        }
    }
    */
    //hw-zad1
    /*
    int num;
    int sum = 0;
    while (true)
    {
        std::cin >> num;
        if (num == 0)
            break;
        sum += num;
    }
    std::cout << sum;
    */
    //hw-zad2
    /*
    int a, b, c, d, e ;
    int solution;
    std::cin >> a >> b >> c >> d >> e;
    for (int x = -100;x <= 100;x++)
    {
        double y = a * x * x * x * x + b * x * x * x + c * x * x + d * x + e;
        if (y >= 0)
            std::cout << x << " ";
    }
    */
    //hw-zad3
    /*
    int number;
    int count = 0,maxCount=0,mostRepeated=0;
    int digit=0;
    std::cin >> number;
    for (int i = 0;i <= 9;i++)
    {
        int copy = number;
        int count = 0;
        while (copy != 0)
        {
            digit = copy % 10;
            if (digit == i)
                count++;
            copy /= 10;
        }
        if (count > maxCount)
        {
            maxCount = count;
            mostRepeated = i;
        }
    }
    std::cout << mostRepeated;
    */
    //hw-zad4
  /*
    int m ,n ,count=0;
    std::cin >> m >> n;
    for (int i = m;i <= n;i++)
    {
        int copy = i;
        bool isCopy = false;
        while (copy>0)
        {
            int lastDigit = copy % 10;
            int rest = copy / 10;
            int r = rest;
            while (r > 0)
            {
                if (r % 10 == lastDigit)
                {
                    isCopy = true;
                    break;
                }
                r /= 10;
            }
            copy /= 10;
        }
        if (!isCopy)
            count++;
    }
    std::cout << count;
    
}
*/
    //hw-zad5
/*
int number;
std::cin >> number;
int midRow = number / 2 + 1;
for (int row = 0;row < midRow;row++)
{
    for (int emptySpace = 0;emptySpace < row;emptySpace++)
        std::cout << " ";
    for(int stars=0;stars<number-2*row;stars++)
        std::cout << "*";
    std::cout<<std::endl;
}
for (int row = midRow-2;row >= 0;row--)
{
    for (int emptySpace = row;emptySpace > 0;emptySpace--)
        std::cout << " ";
    for (int stars = 0;stars < number - 2 * row;stars++)
        std::cout << "*";
    std::cout << std::endl;
}
*/
//hw=zad6
/*
int n;
std::cin >> n;
int num = 1;
for (int i = 1; i <= n; i++) 
{
    if (i % 2 != 0) 
    {
        for (int j = 1; j <= n; j++)
            std::cout << num++ << " ";
    }
    else 
    {
        int start = num + n - 1;
        for (int j = 1; j <= n; j++)
           std:: cout << start-- << " ";
        num += n;
    }
    std::cout << std::endl;
}
*/
/*
int n;
std::cin >> n;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++) 
    {      
        if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            std::cout << ".";
        else
            std::cout << " ";
    }
    std::cout << std::endl;
    for (int s = 0; s < n; s++)
    {
        if (n % 2 == 0)
        {
            if (i == n / 2 || i == n / 2 + 1)
                std::cout << ".";
        }
        else
        {
            if (i == n / 2 + 1)
                std::cout << ".";
        }

    }
}
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            std::cout << ".";
        else
            std::cout << " ";
        std::cout << " ";
    }
}
std::cout << std::endl;
  */ 
/*
int m,n;
std::cin >> m >> n;
int diff = m - n;
int count = 0,digit=0;
for (int i = m;i < n;i++)
{
    int copy = i;
    bool isCopy = true;
    while (copy>0)
    {
        int lastDigit = copy % 10;
        int rest = copy / 10;
        int r = rest;
        while (r > 0)
        {
            if (r % 10 == lastDigit)
            {
                isCopy = true;
                break;
            }
            r /= 10;
        }
        if (isCopy)
            break;
        copy /= 10;
    }
    if (!isCopy)
        count++;
}
std::cout << count;
*/

}
