# Практикум 04 | 27.10.2026 | Snippets

## Snippet 01

```c++
#include <iostream>

bool f() {
    std::cout << 5;
    return false;
}

bool g() {
    std::cout << 123;
    return true;
}

bool h() {
    std::cout << 0;
    return true;
}

void k()
{
    std::cout << (h() || g() || f()) << std::endl;
    std::cout << (g() && f() && h()) << std::endl;
}

int main()
{
    k();
}
```

## Snippet 02

```c++
#include <iostream>

void f(int a) {
	std::cout << "f(int)" << std::endl;
}

void f(char a) {
	std::cout << "f(char)" << std::endl;
}

int main()
{
	f(3.0);
}
```

## Snippet 03

```c++
#include <iostream>

int sum(int a, int b)
{
	std::cout << "sum(int, int)" << std::endl;
	return a + b;
}

double sum(double a, double b)
{
	std::cout << "sum(double, double)" << std::endl;
	return a + b;
}

int main()
{
	std::cout << sum(4, 5) << std::endl;
	std::cout << sum(4.12, 5.13) << std::endl;
	std::cout << sum(4, 1.0) << std::endl;
	std::cout << sum(4.0, 1) << std::endl;
	return 0;
}
```

## Snippet 04

```c++
#include <iostream>
using namespace std;

int g() {
    return f();
}

int f() {
    return 0;
}

int main() {
    std::cout << g();
}
```

## Snippet 05

```c++
#include <iostream>

int main() {
    int a = 10;
    int& b = a;
    b++;
    int c = b;
    c--;
    std::cout << a << " " << b << " " << c;
}
```

## Snippet 06

```c++
#include <iostream>

void f(int& a = 0) {
    std::cout << a << std::endl; 
}

int main() {
    f();
}
```