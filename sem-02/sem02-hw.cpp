/*������ 1 (����� + 15 ������) : �� �� ������ ��������, ����� ������� ��� � ������ �� 24 - ������ ���������
� ��������� ����� �� � ����� ���� 15 ������.
���������� �� �� �������� ��� ������ hh : mm.�������� ������ �� ����� 0 � 23, � �������� ������ �� ����� 0 � 59.
�������� � �������� �� �������� ������ � �� ��� �����, � ������ ���� ������ � ����������

#include <iostream>
int main()
{
    int hours, mins;
    std::cout << "Enter hours:" << std::endl;
    std::cin >> hours;
    std::cout << "Enter minutes:" << std::endl;
    std::cin >> mins;
    int MinsAfter60 = mins - 60 + 15;
    if (hours == 23 && (mins >= 45 && mins < 55))
    {
        std::cout << "00" << ":" << '0' << MinsAfter60;
    }
    else if (hours == 23 && (mins >= 55))
    {
        std::cout << "00" << ":"  << MinsAfter60;
    }
    else if (hours <= 9 && mins < 45)
    {
        std::cout << '0' << hours << ":" << mins + 15;
    }
    else if ((hours > 9 && hours<23) && mins < 45)
    {
        std::cout << hours << ":" << mins + 15;
    }
    else if (hours < 9 && (mins >= 45 && mins < 55))
    {
        std::cout << '0' << hours + 1 << ":" << '0' << MinsAfter60;
    }
    else if (hours < 9 && mins >= 55)
    {
        std::cout << '0' << hours + 1 << ":" << MinsAfter60;
    }
    else if ((hours >= 9 && hours<23) && (mins >= 45 && mins < 55))
    {
        std::cout << hours + 1 << ":" << '0' << MinsAfter60;
    }
    else if ((hours >= 9 && hours<23) && mins >= 55)
    {
        std::cout << hours + 1 << ":" << MinsAfter60;
    }
    else
    {
        std::cout << "Invalid hours or minutes!";
    }
    return 0;
}
������ 2 : �� �������, �� �������� �� ����� � �����, ��� ����� ����� � ��� �
������������ ��-������ ��� ����� �� ����� �� ������ ��� ��� ������������ �� - ����� ��� ����� �� ���.
�� ������ � ��������� ������� ����� ���� �� ���� �����.�������� ��������,
����� ������� �� ����������� 5 �� ���� ���� �����.
�� �� ������ �� ����������� ����� "yes", ��� ���������� �������� � �����, ��� "no", � �������� ������.

#include <iostream>
int main()
{
    std::cout << "Input five numbers:" << std::endl;
    double a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    if ((b >= a && b >= c) && (c >= b && c >= d) && (d >= c && d >= e))
    {
        std::cout << "yes";
    }
    else if ((b >= a && b >= c) && (c >= b && c >= d) && (d <= c && d <= e))
    {
        std::cout << "yes";
    }
    else if ((b >= a && b >= c) && (c <= b && c <= d) && (d >= c && d >= e))
    {
        std::cout << "yes";
    }
    else if ((b >= a && b >= c) && (c <= b && c <= d) && (d <= c && d <= e))
    {
        std::cout << "yes";
    }
    else if ((b <= a && b <= c) && (c <= b && c <= d) && (d <= c && d <= e))
    {
        std::cout << "yes";
    }
    else if ((b <= a && b <= c) && (c <= b && c <= d) && (d >= c && d >= e))
    {
        std::cout << "yes";
    }
    else if ((b <= a && b <= c) && (c >= b && c >= d) && (d >= c && d >= e))
    {
        std::cout << "yes";
    }
    else if ((b >= a && b >= c) && (c >= b && c >= d) && (d <= c && d <= e))
    {
        std::cout << "yes";
    }
    else { std::cout << "no"; }
    return 0;
}
������ 3 : �� �� ������ ��������, ����� ������� �� ������������ ���������� ����� n.
���������� �� ��������� ���� ������� �� �� ��������.
��� �� ��������, �� ������� "yes" � �������������� �� ������� � ������� ����� �� �������,
� ��������� ������ - "no" � ������� � ������� ��� �� ������� ��.

#include <iostream>
int main()
{
    std::cout << "Input 3-digit number:"<<std::endl;
    int number;
    std::cin >> number;
    int hundreds = number / 100;
    int dozens = (number % 100) / 10;
    int units = number % 10;
    if (hundreds != dozens && dozens != units && hundreds != units)
    {
        std::cout << "yes"<<std::endl<<hundreds*units;
    }
    else { std::cout << "no" << std::endl << units << dozens << hundreds; }
    return 0;
}
������ 4 : �� �� ������ ��������, ����� ������� �� ������������ ��� ���� �����, �������� �� ����.
���������� �� ������� ��������� ����� ������������ ����� � ����������� ������� ����� �� ���.
��� ���������� ����� �� ���� �������, �� ������� ���������� �� ���. ��� �� ���� ����� - ������������ �� ���.

#include <iostream>
int main()
{
    std::cout << "Input 3 whole numbers:" << std::endl;
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
    if(num1==0 || num2==0 || num3==0)
    {
        std::cout << "All number must be different from 0"<<std::endl<<"Enter 3 whole numbers excluding 0:"<<std::endl;
        std::cin >> num1 >> num2 >> num3;
    }
    if (num1 % 2 == 0 && num2 % 2 == 0 && num3 % 2 == 0)
    {
        if (num1 >= num2 && num1 >= num3) { std::cout << num1; }
        else if (num2 >= num1 && num2 >= num3) { std::cout << num2; }
        else if (num3 >= num2 && num3 >= num1) { std::cout << num3; }
    }
    else if (num1 % 2 != 0 && num2 % 2 != 0 && num3 % 2 != 0)
    {
        if (num1 <= num2 && num1 <= num3) { std::cout << num1; }
        else if (num2 <= num1 && num2 <= num3) { std::cout << num2; }
        else if (num3 <= num2 && num3 <= num1) { std::cout << num3; }
    }
    else if (num1 % 2 == 0 && num2 % 2 != 0 && num3 % 2 != 0)
    {
        if (num2 <= num3) { std::cout << num1 - num2; }
        else if (num3 <= num2) { std::cout << num1 - num3; }
    }
    else if (num2 % 2 == 0 && num1 % 2 != 0 && num3 % 2 != 0)
    {
        if (num1 <= num3) { std::cout << num2 - num1; }
        else if (num3 <= num1) { std::cout << num2 - num3; }
    }
    else if (num3 % 2 == 0 && num2 % 2 != 0 && num1 % 2 != 0)
    {
        if (num2 <= num1) { std::cout << num3 - num2; }
        else if (num1 <= num2) { std::cout << num3 - num1; }
    }
    else if (num1 % 2 != 0 && num2 % 2 == 0 && num3 % 2 == 0)
    {
        if (num2 >= num3) { std::cout << num2 - num1; }
        else if (num3 >= num2) { std::cout << num3 - num1; }
    }
    else if (num1 % 2 != 0 && num1 % 2 == 0 && num3 % 2 == 0)
    {
        if (num1 >= num3) { std::cout << num1 - num2; }
        else if (num3 >= num1) { std::cout << num3 - num2; }
    }
    else if (num3 % 2 != 0 && num2 % 2 == 0 && num1 % 2 == 0)
    {
        if (num2 >= num1) { std::cout << num2 - num3; }
        else if (num1 >= num2) { std::cout << num1 - num3; }
    }
}
������ 5 : �� �� ������ ��������, ����� �� ������� ����� � ������,
�������� �� ������������, �������� ���� �� ����� � ���� �����.
#include <iostream>
int main()
{
    std::cout << "Enter month:" << std::endl;
    int month,year;
    std::cin >> month;
    std::cout << "Enter year:" << std::endl;
    std::cin >> year;
    if (month == 2 && year % 4 == 0) { std::cout << "29"; }
    else if (month == 2 && year % 4 != 0) { std::cout << "28"; }
    else switch (month)
    {
    case 1: std::cout << "31"; break;
    case 3: std::cout << "31"; break;
    case 5: std::cout << "31"; break;
    case 7: std::cout << "31"; break;
    case 8: std::cout << "31"; break;
    case 10: std::cout << "31"; break;
    case 12: std::cout << "31"; break;
    case 4: std::cout << "30"; break;
    case 6: std::cout << "30"; break;
    case 9: std::cout << "30"; break;
    case 11: std::cout << "30"; break;
    default:std::cout << "Invalid month!";
    }
    return 0;
}*/