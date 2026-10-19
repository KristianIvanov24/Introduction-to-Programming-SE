# Практикум 02 | 13.10.2026 | Snippets

## Snippet 01

```c++
#include <iostream>

int main()
{
    int a = 3.5;
    double b = 5.0;
    int c = a++ * ++b;

    std::cout << a / 2 << std::endl;
    std::cout << b / 2 << std::endl;
    std::cout << c << std:: endl;
}
```

## Snippet 02

```c++
#include <iostream>

int main()
{
    int a = 5, b = 0, c = -3;

    std::cout << (a && b) << std::endl; // 1
    std::cout << (a == 1 || b == 2 && c == 3) << std::endl; // 2
    std::cout << !!!b << std::endl; // 3
    std::cout << (!a < b) << std::endl; // 4
    std::cout << !(a < b) << std::endl; // 5
}
```

## Snippet 03

```c++
#include <iostream>

int main()
{
    int a = 10;
    std::cout << ((a == 6) && (a / !a));
}
```

## Snippet 04

```c++
#include <iostream>

int main()
{
    int a;
    std::cout << a;
}
```

## Snippet 05

```c++
#include <iostream>

int a = 100;

int main()
{
    {
        int a = 10;
        {
            a += 5;
            ::a += 5;
            int a = 3;
            a += 2;
        }
        std::cout << a << " ";
    }
    std::cout << a;
}
```

## Snippet 06

```c++
#include <iostream>

int main() {
    int a = 0;
    ++a++;
    std::cout << a << std::endl;
}
```

## Snippet 07

```c++
#include <iostream>

int main() {

    int a = 0, b = 5;

    if (a, b) {
        std::cout << a;
    } else {
        std::cout << b;
    }
}
```

## Snippet 08

```c++
#include <iostream>

int main() {
    int num = 2;
    
    switch (num) {
        case 1: num += 10;
        case 2: num *= 3;
        case 3: num -= 1;  
    }
    
    std::cout << num;
}
```
