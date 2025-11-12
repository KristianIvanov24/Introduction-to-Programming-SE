# Консултация СИ, 11.11.2025г. - Контролно 1

## I. Основи и оператори

<details><summary><b>Пример 1</b></summary>
<b>Какво ще отпечата програмата?</b>

```cpp
int a = 4;
++a++;
std::cout << a;
```
<details><summary><b>Отговор</b></summary>

Няма да се компилира, защото се интерпретира като ++(a++), постификсния връща стойност (rvalue), a префиксния очаква променлива/референция (lvalue)
</details>
</details>

<details><summary><b>Пример 2</b></summary>
<b>Какво връща изразът със запетая?</b>

```cpp
int x = 2;
int y = (x += 4, x *= 3, x - 2);
std::cout << x << " " << y;
```
<details><summary><b>Отговор</b></summary>

`x = 18`, `y = 16`.
</details>
</details>

<details><summary><b>Пример 3</b></summary>
<b>Какво ще отпечата програмата?</b>

```cpp
int x = 5;
int y = 3 * x - 12 < 0 || x-- > 3;
std::cout << x << " " << y;
```
<details><summary><b>Отговор</b></summary>

`x = 4`, `y = 1`.
</details>
</details>

<details><summary><b>Пример 4</b></summary>
<b>Какво ще отпечата програмата?</b>

```cpp
double a = 0.1 + 0.2;
double b = 0.3;
if (a == b) std::cout << "equal";
else if (std::abs(a - b) < 1e-9) std::cout << "close";
else std::cout << "not equal";
```
<details><summary><b>Отговор</b></summary>

`close`.
</details>
</details>

<details><summary><b>Пример 5</b></summary>
<b>Как може да се подобри решението? Защо?</b>

```cpp
double price;
std::cin >> price;
double total = price * 0.85;
```
<details><summary><b>Отговор</b></summary>
Да се използва константа вместо магическо число.
</details>
</details>

<details><summary><b>Пример 6</b></summary>
<b>Какво ще отпечата програмата?</b>

```cpp
int a = 'B';
std::cout << a;
```
<details><summary><b>Отговор</b></summary>

`66`.
</details>
</details>

<details><summary><b>Пример 7</b></summary>
<b>Какво ще отпечата програмата?</b>

```cpp
char a = "C";
std::cout << a;
```
<details><summary><b>Отговор</b></summary>
Няма да се компилира, защото е използван стринг литерал.
</details>
</details>

<details><summary><b>Пример 8</b></summary>
<b>Какво ще отпечата програмата?</b>

```cpp
int a = 70;
bool b = !a;
b += 3;
char c = ++a;
double d = (--a) / 2.0;
int f = (a > 5);
std::cout << b << " " << c << " " << d << " " << f;
```
<details><summary><b>Отговор</b></summary>

`1 G 35 1`.
</details>
</details>

<details><summary><b>Пример 9</b></summary>
<b>Какво ще отпечата програмата?</b>

```cpp
int a = 2;
int b = !!(a--);
unsigned c = b == 1 ? b : !b;
std::cout << c;
```
<details><summary><b>Отговор</b></summary>

`1`.
</details>
</details>

<details><summary><b>Пример 10</b></summary>
<b>Ще се компилира ли кода и какво ще изведе?</b>

```cpp
int value = 5;

int main() 
{
    int value = 10;

    std::cout << value << " ";
    std::cout << ::value << " ";
}
```
<details><summary><b>Отговор</b></summary>

`10 5`
</details>
</details>

<details><summary><b>Пример 11</b></summary>
<b>Ще се компилира ли кода и какво ще изведе?</b>

```cpp
int main() 
{
    int a = 021;     
    int b = 0x12;  

    std::cout << a << " " << b;
}
```
<details><summary><b>Отговор</b></summary>

`17 18` двете числа са представени в а - осмична и b - шестнадесетична бройни системи
</details>
</details>

---

## II. Условни оператори и switch

<details><summary><b>Пример 12</b></summary>
<b>Какво ще отпечата програмата?</b>

```cpp
int score = 11;
if (score >= 0 && score <= 10)
    if (score < 4) std::cout << "Low";
    else if (score < 7) std::cout << "Mid";
    else std::cout << "High";
```
<details><summary><b>Отговор</b></summary>
Няма да отпечата нищо.
</details>
</details>

<details><summary><b>Пример 13</b></summary>
<b>Пренапишете със switch.</b>

```
(x == 3 || x == 6) ? cout << "group" : (x == 9 ? cout << 9 : cout << "none");
```
<details><summary><b>Отговор</b></summary>

```cpp
switch(x){
    case 3:
    case 6: cout << "group"; break;
    case 9: cout << 9; break;
    default: cout << "none";
}
```
</details>
</details>

<details><summary><b>Пример 14</b></summary>
<b>Какво ще отпечата програмата за а = 1, 2, 3, 4, 5?</b>

```cpp
switch(a){
    case 1: cout << "X ";
    case 2:
    case 3: cout << "Y "; if (a == 3) break;
    case 4: cout << "Z "; break;
    default: cout << "W";
}
```
<details><summary><b>Отговор</b></summary>
1 → X Y Z
2 → Y Z
3 → Y
4 → Z
5 → W
</details>
</details>

<details><summary><b>Пример 15</b></summary>
<b>Пренапишете само със switch:</b>

```cpp
int a;
cin >> a;
if (a != 1) cout << "isn't one";
if ((a >= 2) && (a <= 4)) cout << "between two & four";
if (a != 4) cout << "isn't four";
```
<details><summary><b>Отговор</b></summary>

```cpp
int a;
cin >> a;
switch (a)
{
    case 1: cout << "isn't four " << endl; break;
    case 2:
    case 3: cout << "isn't one " << "between two & four " << "isn't four" << endl; break;
    case 4: cout << "isn't one " << "between two & four " << endl; break;
    default: cout << "isn't one " << "isn't four " << endl; break;
}
```
</details>
</details>


<details><summary><b>Пример 16</b></summary>
<b>Пренапишете само с if - else:</b>

```cpp
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
```
<details><summary><b>Отговор</b></summary>

```cpp
if (x == 1 || x == 2) 
    std::cout << "Low ";
else
{
    if (x == 3)
        std::cout << "Mid ";

    if (x == 3 || x == 4)
        std::cout << "High ";
        
    if (x > 0)
        std::cout << "Positive";
    else
        std::cout << "Other";
}
```
</details>
</details>

<details><summary><b>Пример 17</b></summary>
<b>Ще се компилира ли кодът и какво извежда?</b>

```cpp
int a = 20;
if (a -= a += 4) a++;
std::cout << a;
```
<details><summary><b>Отговор</b></summary>
Компилира се; резултатът е 0.
</details>
</details>

---

## III. Цикли

<details><summary><b>Пример 18</b></summary>
<b>Какво ще отпечата програмата?</b>

```cpp
int a = 6;
while (a-- > 0);
std::cout << a;
```
<details><summary><b>Отговор</b></summary>

`-1`
</details>
</details>

<details><summary><b>Пример 19</b></summary>
<b>Какво ще отпечата програмата?.</b>

```cpp
int i = 0;
while (++i, ++i < 10) cout << i << " ";
```
<details><summary><b>Отговор</b></summary>
2 4 6 8
</details>
</details>

<details><summary><b>Пример 20</b></summary>
<b>Какво се извежда?</b>

```cpp
for (int i = 0; i < 10; ++i) 
{
    for (int j = 0; j < 2; ++j) i++;
    cout << i << " ";
}
```
<details><summary><b>Отговор</b></summary>
2 5 8 11
</details>
</details>

<details><summary><b>Пример 21</b></summary>
<b>Какво ще отпечата цикълът?</b>

```cpp
for (int i = -5; i++; i++)
    std::cout << i << " ";
```
<details><summary><b>Отговор</b></summary>
Безкраен цикъл.
</details>
</details>

<details><summary><b>Пример 22</b></summary>
<b>Какво ще отпечата цикълът?</b>

```cpp
for (int i = -5; ++i; i++)
    std::cout << i << " ";
```
<details><summary><b>Отговор</b></summary>

`-4 -2`
</details>
</details>

<details><summary><b>Пример 23</b></summary>
<b>Какво се извежда?</b>

```cpp
int i = 5;
while (std::cout << i << " ", --i);
```
<details><summary><b>Отговор</b></summary>

`5 4 3 2 1`
</details>
</details>

---

## IV. Функции

<details><summary><b>Пример 24</b></summary>
<b>Какво ще отпечата следният код?</b>

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
<details><summary><b>Отговор</b></summary>

`1110`
</details>
</details>

<details><summary><b>Пример 25</b></summary>
<b>Какво ще отпечата програмата?</b>

```cpp
#include <iostream>

int f(int a, int b = 3, int c = 2) 
{ 
    return a + b * c; 
}

int main() 
{
    int x = 4;
    std::cout << f(++x) << " " << f(x, 1);
}
```
<details><summary><b>Отговор</b></summary>

`11 7`
</details>
</details>

<details><summary><b>Пример 26</b></summary>
<b>Има ли двусмислица при overload-a?</b>

```cpp
void f(char a) { std::cout << a; } // 1

void f(int a) { std::cout << a; } // 2

void f(char a, int b) { std::cout << a << '-' << b; } // 3

void f(double a, char b) { std::cout << b << '-' << a; } // 4

void f(bool a) { std::cout << a; } // 5

void f(char a, bool b, int c) { std::cout << a << b << c; } // 6

void f(const int a) { std::cout << a; } // 7

void f(char a, unsigned b) { std::cout << a << '-' << b; } // 8

char f(char a) { return a; } // 9
```
<details><summary><b>Отговор</b></summary>

Конфликт между `void f(char)` и `char f(char)`, и между `f(int)` и `f(const int)`.
</details>
</details>

<details><summary><b>Пример 27</b></summary>
<b>Как бихте оптимизирали кода?</b>

```cpp
int a, b, c;
std::cin >> a >> b >> c;
std::cout << a * a + 2 * a << std::endl;
std::cout << b * b + 2 * b << std::endl;
std::cout << c * c + 2 * c << std::endl;
```
<details><summary><b>Отговор</b></summary>

Да се създаде функция `int calc(int x) { return x * x + 2 * x; }`.
</details>
</details>


