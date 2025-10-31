#include <iostream>

/*
Задача 2: Въвеждат се 5 цели числа - a,b,c,d, e. Разглеждаме полинома f(x) = a * x^4 + b * x^3 + c* x^2 + d * x + e. 
Отпечатайте всички цели решения на f(x) >= 0 където x e в интервала [-100, 100]

Вход: -1 4 0 8 1 , Изход: 0 1 2 3 4

Вход: 0 0 -1 5 -6 Изход: 2 3
*/

int main()
{
    int a,b,c,d,e;
    std::cin >> a >> b >> c >> d >> e;
  
    for(int i = -100; i <= 100; i++)
    {
        int res = a * i * i * i * i +
                  b * i * i * i +
                  c * i * i +
                  d * i +
                  e;
                  
        if(res >= 0)
            std::cout << i << " ";
    }

    return 0;
}
