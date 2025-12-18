# Structs as value-objects. Enums. Namespaces.

## 1. Структури

Структурите в C++ се използват за групиране на елементи. Елементите, наричани още членове, могат да бъдат от различен тип и с различна големина.

```c++
struct Box
{
	double height;
	double width = 0;
	double length = 2;
	// double height, width, length; is also possible
};
```

### Деклариране на обекти от новия тип

```c++
Box b; // default values to height and width and length

Box b2 = {3, 4, 3.4}; // height = 3, width = 3, length = 3.4;
Box b2 = {3}; // height = 3, width = 0, length = 2;

Box b3;
b3.height = 13;
b3.width = 14;
b3.length = 20;
```

#### Подаване във функции

Ако няма да променяме обекта го подаваме по **константна референция.**

```c++
double calculcateVolume(const Box& b)
{
   return b.height * b.width * b.length;
}
```

Може и само по **референция**, но тогава може да се правят промени върху подадения аргумент.

```c++
void readBox(Box& b)
{
   cin >> b.height >> b.width >> b.length;
}
```

Може и да го подаваме по **копие**.

```c++
Box revertBox(Box b)
{
   int temp = b.height;
   b.height = b.width;
   b.width = temp;

   return b;
}
```

#### Създаване на динамични обекти

```c++
#include <iostream>

struct Box
{
	double height;
	double width;
	double length;
};

double calculcateVolume(const Box& b)
{
   return b.height * b.width * b.length;
}

int main()
{
	Box* boxPtr = new Box();

	// different types of assigning a value to a property when you have a pointer
	(*boxPtr).height = 3;
	(*boxPtr).width = 1;
	boxPtr->length = 4;

	std::cout << calculcateVolume(*boxPtr) << std::endl;

	delete boxPtr;
}
```

#### Влагане на обекти

```c++
struct Box
{
	double height;
	double width;
	double length;
};

struct Warehouse
{
	char name[1024];
	Box b1;
	Box b2;
};

int main()
{
	Warehouse w = { "Ekont", { 1, 2, 3 }, { 4, 5, 3 } };

	std::cout << w.name;
}
```

#### Масиви от обекти

```c++
struct Box
{
	double height;
	double width;
	double length;
};

int main()
{
    const size_t SIZE = 10;

    // Static array of 10 Box objects 
    // Array - stack allocated
    // Boxes - stack allocated
	Box arr1[SIZE];

    // Static array of 10 pointers to Box objects
    // Array - stack allocated
    // Boxes - heap allocated
    Box* arr2[SIZE];
    
    // Dynamic array of 10 Box objects
    // Array - heap allocated
    // Boxes - stack allocated
	Box* arr3 = new Box[SIZE];

    // Dynamic array of 10 pointers to Box objects
    // Array - heap allocated
    // Boxes - heap allocated
    Box** arr4 = new Box*[SIZE];

    // Initialize arr2 pointers (they point to heap-allocated boxes)
    for (size_t i = 0; i < SIZE; i++) {
        arr2[i] = new Box();
    }

    // Initialize arr4 pointers (they point to heap-allocated boxes)
    for (size_t i = 0; i < SIZE; i++) {
        arr4[i] = new Box();
    }

	std::cout << arr1[0].height << " " 
        << arr2[3]->width << " " 
        << arr3[0].height << " " 
        << arr4[0]->height << " ";


    // arr1 - no cleanup needed (all are stack allocated)

    // arr2 - free dynamic boxes in static array
    for (size_t i = 0; i < SIZE; i++) {
        delete arr2[i];
    }

    // arr3 - free dynamic array of stack-allocated boxes
    delete[] arr3;

    // arr4 - free dynamic boxes and dynamic array
    for (size_t i = 0; i < SIZE; i++) {
        delete arr4[i];
    }
    delete[] arr4;
}
```

## 2. Пространство от имена

Инструмент за избягване на конфликти на имена. Има scope, в който дефинираме символи

```c++
namespace myNamespace
{
    int value = 42;

    void printValue()
    {
        std::cout << "Value: " << value << std::endl;
    }
}
```

Използваме:

- чрез using namespace **myNamespace** - целия namespace

```c++
int main()
{
    using namespace myNamespace;
    printValue();
}
```

- чрез using **myNamespace::printValue** - конкретен обект

```c++

int main()
{
    using myNamespace::printValue;
    printValue();
}
```

- чрез оператора за резолюция

```c++
int main()
{
    myNamespace::printValue();
}
```

## 4. Енумерации

### Unscoped enums

`enum` е дефиниран тип, който съдържа набор от именувани цели константи. Стойностите са имплицитно преобразуеми в `int`, като по подразбиране започват от 0. Ако укажем ст-ст **n**, то следващия елелемт има ст-ст **n+1**

```c++
#include <iostream>

enum Color
{
   Red, // 0
   Green, // 1
   Blue = 4, // 4
   Orange // 5
};

int main()
{
   Color myColor = Green;
   int value = Green;

   std::cout << "Color value: " << value << std::endl; // 1
}

```

Тъй като зад енумерациите седят числа, това може да доведе до нежелани резултати.

```c++
#include <iostream>

enum Color
{
   Red, // 0
   Green, // 1
   Blue, // 2
   Orange // 3
};

enum Fruits
{
   Apple,
   Banana,
   Cherry,
   Rawsberry
};

int main()
{
   Color myColor = Orange;
   Fruits myFruit = Rawsberry;

   if (myFruit == myColor) 
   {
       std::cout << "Fruit Rawsberry is the same as Color Orange!"; // logical error because a fruit is not a color
   }
}

```

### Scoped enums

`enum class` предоставя по-сигурна алтернатива на `enum`, като предотвратява имплицитното преобразуване и ограничава стойностите до собствения им обхват.

```c++
#include <iostream>

enum class Status
{
   Success,
   Failure,
   Pending
};

int main()
{
   Status s = Status::Success; // Трябва да се използва операторът за обхват

   // int value = s; // ГРЕШКА: Няма имплицитно преобразуване към int
   int value = (int)(s); // Позволено при явно преобразуване(кастване)

   std::cout << "Статус стойност: " << value << std::endl; // Изход: 0
}
```

## Задача за вкъщи, който желае да упражни преди да използва в проекта:

Реализирайте система за управление на библиотека:

- Структура **Book** със следните полета:
  - title (низ с дължина най-много 64 символа)
  - author (низ с дължина най-много 32 символа)
  - publicationYear (int)
  - status (enum: Available, Borrowed, Reserved)
- Структура **Library**, която съдържа:
  - name (низ с дължина най-много 32 символа)
  - Масив от Book (максимум 10 книги)
  - bookCount (брой налични книги)
- Функции:
  - addBook(Library&, const char*, const char*, int) - добавя книга в библиотеката.
  - borrowBook(Book&) - маркира книга като заета.
  - reserveBook(Book&) - маркира книга като резервирана.
  - printLibrary(const Library&) - извежда всички книги и техния статус.
