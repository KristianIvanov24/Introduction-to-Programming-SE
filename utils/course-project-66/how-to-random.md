# Random number generation (Генериране на случайни числа)

Функцията `rand()` генерира случайни числа. Тя е част от `cstdlib` библиотеката.

## Включване на библиотеки

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
```

## Как се използва?

```cpp
srand(time(nullptr)); // Задаване на seed, спрямо който се генерират случайните числа (само един път в началото на програмата)
                      // Ако не го зададем при всяко пускане на програмата, ще се генерират една и съща последователност от случайни числа

int randomNum = rand(); // Random число от 0 до RAND_MAX=32767 (2^15 - 1), 
                        // RAND_MAX зависи от операционната система може и да бъде по-голямо число
```

## Random число от 1 до 100

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
    srand(time(nullptr));
    
    int randomNum = (rand() % 100) + 1;
    std::cout << randomNum << std::endl;
    
    return 0;
}
```

## 5 random числа

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
    srand(time(nullptr));
    
    for (int i = 0; i < 5; i++) {
        std::cout << (rand() % 100) + 1 << " ";
    }
    
    return 0;
}
```

## Зарче (1-6)

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
    srand(time(nullptr));
    
    int dice = (rand() % 6) + 1;
    std::cout << "Зарче: " << dice << std::endl;
    
    return 0;
}
```

## Формула

Random число от 1 до N - `(rand() % N) + 1` 