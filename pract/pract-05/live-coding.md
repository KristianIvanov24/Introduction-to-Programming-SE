# Практикум 05 | 03.11.2026 | Live

## Live 01

Пренапишете кода, като използвате `switch` вместо условния оператор `?:`.

```c++
#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    (x == 3 || x == 6) ? std::cout << "group" : (x == 9 ? std::cout << 9 : std::cout << "none");
}
```

## Live 02

Подобрете четимостта на кода, без да променяте поведението му.

```c++
#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << a * a + 2 * a << std::endl;
    std::cout << b * b + 2 * b << std::endl;
    std::cout << c * c + 2 * c << std::endl;
}
```