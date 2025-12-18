# Declaration vs definition. Увод в разделната компилация. ".cpp" и ".h" файлове

## Declaration vs definition (декларация и дефиниция)
"In programming, a declaration tells the compiler something exists (its name, type, parameters), reserving no memory, like a signpost; a definition provides the actual implementation or allocates memory for that entity (a function's code or a variable's storage), making it fully usable"

#### Декларация на една фунцкия
```c++
int f(int, int);
// or
int f(int a, int b);
```
#### Дефиниция на една функция
```c++
int f(int a, int b) 
{
    return a + b;
}
```

### Разделна компилация
Разделната компилация е начин да разделяме кода си в отделни файлове.

### Защо да разделяме кода в отделни файлове?
Когато проект се разрастне, започва да става неудобно всичко да е в един файл. Има и други причини, поради които е нужна разделна компилация, но с тях ще се запознаете в курса по ООП 2-ри семестър.

### Как?

#### Header файл (mathUtils.h)

```cpp
#pragma once // !МНОГО ВАЖНО!

// Декларации на функции
int add(int, int);
double multiply(double num1, double num2);

```

#### Source файл (mathUtils.cpp)

```cpp
#include "mathUtils.h"

// Дефиниции на функциите
int add(int a, int b) {
    return a + b;
}

double multiply(double a, double b) {
    return a * b;
}
```

#### main.cpp

```cpp
#include <iostream>
#include "mathUtils.h"

int main() {
    std::cout << add(5, 3) << std::endl;
    std::cout << multiply(2.5, 4.0) << std::endl;
    return 0;
}
```

### Константи при разделна компилация
Константи декларирани в `.cpp` файл са локални само за самия него, а константи дефинирани в `.h` са глобални за цялата програма (за да ги използваме трябва да include-нем съответния `.h` файл разбира се)

### Enum и enum class при разделна компилация
При разделна компилация дефинираме enum и enum class-овете в header файла (`.h`)