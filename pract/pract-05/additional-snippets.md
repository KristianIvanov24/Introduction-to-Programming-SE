# УП-практикум | 2026-2027 | Допълнителни code snippets за контролно №1

*Това са code snippets, които не са разглеждани по време на занятията на практикумите на група I. Оставени са за допълнителна самостоятелна подготовка.*

*Ако конкретно условие за snippet липсва, приемете, че условието е:*

> "Oпределете дали програмата се компилира. Ако се компилира, посочете какво извежда. Ако не се компилира, обяснете причината."

## Snippets към практикум 02

### Snippet 01

```cpp
#include <iostream>

int main()
{
    int a, b, c;
    a = b = c = 7;

    a += 3;
    b *= 2;
    std::cout << a << " " << b << " " << c;
}
```

### Snippet 02

```cpp
#include <iostream>

int main()
{
    int a = 7;
    if (a -= a += 7)
        a++;
    else
        a += 3; 
    std::cout << a;
}
```

### Snippet 03

```cpp
#include <iostream>

const int INTEGER_MAX = 2147483647;

int main()
{
    int x = INTEGER_MAX; 
    std::cout << x + 1;
}
```

### Snippet 04

```cpp
#include <iostream>

int main() {
    int a = 5;

    if (a < 2)
        std::cout << "I am ";
        std::cout << "Pesho";
}
```

## Snippets към практикум 03

### Snippet 01

```cpp
#include <iostream>

int main()
{
    int a = 10;
    while (a != 0);
        std::cout << a-- << std::endl;
}
```

### Snippet 02

```cpp
#include <iostream>

int main()
{
    int a = 0;
    while (a)
    {
        std::cout << "a";
    }
}
```

### Snippet 03

```cpp
#include <iostream>

int main() {
    for (size_t i = 0; i < 5;)
    {
        std::cout << "FMI";
    }
}
```

### Snippet 04

```cpp
#include <iostream>

int main() {
    int sum1 = 0;
    for (size_t i = 0; i < 10; sum1 += i, ++++i);

    int sum2 = 0;
    for (size_t i = 0; i < 10; sum2 += i, i++++);

    std::cout << sum1 << " " << sum2;
}
```

## Snippets към практикум 05

### Snippet 01

Как бихте подобрили четимостта на следния код?

```c++
#include <iostream>

int main()
{
    double price;
    std::cin >> price;
    double total = price * 0.85;
}
```

<details>
<summary>Отговор</summary>

---

```c++
#include <iostream>

int main()
{
    const double DISCOUNT_FACTOR = 0.85;
    double price;
    std::cin >> price;
    double total = price * DISCOUNT_FACTOR;
}
```

</details>

### Snippet 02

```cpp
#include <iostream>

int main()
{
    int a = 4;
    ++a++;
    std::cout << a;
}
```

<details>
<summary>Отговор</summary>

---

**Не се компилира.** `a++` се оценява до rvalue (*временна стойност*), която не може да бъде операнд на префиксния `++`.

</details>

### Snippet 03

```cpp
#include <iostream>

int main()
{
    int a = 'B';
    std::cout << a;
}
```

<details>
<summary>Отговор</summary>

---

Изход: `66`.

</details>

### Snippet 04

```cpp
#include <iostream>

int main()
{
    int a = 70;
    bool b = !a;
    b += 3;
    char c = ++a;
    double d = (--a) / 2.0;
    int f = (a > 5);
    std::cout << b << " " << c << " " << d << " " << f;
}
```

<details>
<summary>Отговор</summary>

---

Изход: `1 G 35 1`. `b += 3` присвоява на `bool` истина; символът с код `71` е `G`.

</details>

### Snippet 05

```cpp
#include <iostream>

int value = 5;

int main() 
{
    int value = 10;

    std::cout << value << " ";
    std::cout << ::value << " ";
}
```

<details>
<summary>Отговор</summary>

---

Изход: `10 5`. Локалната променлива "засенчва" глобалната, а `::value` се оценява до глобалната.

</details>

### Snippet 06

```cpp
#include <iostream>

int main()
{
    int a = 6;
    while (a-- > 0);
    std::cout << a;
}
```

<details>
<summary>Отговор</summary>

---

Изход: `-1`. Тялото на `while` е празно заради точката и запетаята.

</details>

### Snippet 07

```cpp
#include <iostream>

int main()
{
    int i = 0;
    while (++i, ++i < 10) std::cout << i << " ";
}
```

<details>
<summary>Отговор</summary>

---

Изход: `2 4 6 8 `. При всяка проверка `i` се увеличава два пъти.

</details>

### Snippet 08

```cpp
#include <iostream>

int main()
{
    int i = 5;
    while (std::cout << i << " ", --i);
}
```

<details>
<summary>Отговор</summary>

---

Изход: `5 4 3 2 1 `. Операторът запетая е лявоасоциативен и `std::cout << i << " "` ще се оцени преди `--i`. Това означава, че стойността на `i` ще се принтира преди да се декрементира. 

</details>

### Snippet 09


```cpp
#include <iostream>

using namespace std;

int num = 10;
int fun(int num)
{
    cout << ++num;
    return num * 3;
}

int main() {
    int num = 10;
    fun(num);
    cout << num;
}
```

<details>
<summary>Отговор</summary>

---

Изход: `1110`. Параметърът на функцията `fun` е копие на `num`. Така извикване на функцията и последвалото изпълнение на нейното тяло не променят локалната променлива, която е дефинирана в тялото на функцията `main`.

</details>

### Snippet 10

Компилират ли се всички декларации и дефиниции на `f`? Ако не, посочете конфликтите.

```cpp
#include <iostream>

void f(char a) { std::cout << a; } // 1

void f(int a) { std::cout << a; } // 2

void f(char a, int b) { std::cout << a << '-' << b; } // 3

void f(double a, char b) { std::cout << b << '-' << a; } // 4

void f(bool a) { std::cout << a; } // 5

void f(char a, bool b, int c) { std::cout << a << b << c; } // 6

void f(const int a) { std::cout << a; } // 7

void f(char a, unsigned b) { std::cout << a << '-' << b; } // 8

char f(char a) { return a; } // 9

int main()
{
    return 0;
}
```

<details>
<summary>Отговор</summary>

---

**Не се компилира.** `f(int)` и `f(const int)` са еднакви сигнатури за параметър, подаван по стойност, и представляват повторна дефиниция, която води до двусмислие. Също така `void f(char)` и `char f(char)` не могат да се предефинират (overload) единствено по тип на връщаната стойност.

</details>

