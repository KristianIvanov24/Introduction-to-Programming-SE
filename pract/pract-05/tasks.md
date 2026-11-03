# Практикум 05 | 03.11.2026 | Задачи

> При всяка задача запазете поведението на програмата.

## Задача 01

Пренапишете кода, като използвате само `switch` вместо трите проверки с `if`.

```c++
#include <iostream>

int main()
{
    int a;
    std::cin >> a;
    if (a != 1) std::cout << "isn't one";
    if ((a >= 2) && (a <= 4)) std::cout << "between two & four";
    if (a != 4) std::cout << "isn't four";
}
```

## Задача 02

Пренапишете кода, като използвате само конструкции `if` и `else`, без `switch` и условен оператор `?:`.

```c++
#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    
    switch (x) 
    {
        case 1:
        case 2:
            std::cout << "Low ";
            break;
        case 3:
            std::cout << "Mid ";
        case 4:
            std::cout << "High ";
        default:
            x > 0 ? std::cout << "Positive" : std::cout << "Other";
    }
}
```
