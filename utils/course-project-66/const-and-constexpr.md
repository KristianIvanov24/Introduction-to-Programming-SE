# const vs constexpr

## Основната разлика

**`const`** - Не може да се променя след инициализация. Може да се изчисли runtime или compile-time.

**`constexpr`** - Задължително се изчислява compile-time.

## const

```cpp
const int x = 10;
x = 20;  // Дава компилационна грешка! Не може да променяме const след инициализация.

const int userInput = getUserInput();  // Работи - изчислява се runtime
```

#### Кога използваме const:
- Променливи, които не се променят, но стойността се определя runtime
- За параметри на функции, които не трябва да се променят

## constexpr

```cpp
constexpr int x = 10;
constexpr int y = x * 2;  // Изчислява се compile-time (y = 20)

int arr[x];  // Работи, защото размерът е известен compile-time
```

#### Кога използваме constexpr:
- Стойности, които могат да се изчислят compile-time като:
  - Математически константи: `constexpr double PI = 3.14;`
  - Размери на масиви: `constexpr int SIZE = 512;`
- Константи в header файлове (предотвратява множество копия при всеки `include`)

## Кратко правило, с което да запомните:
Може ли стойността да бъде определена compile-time?

- **ДА** → използвайте `constexpr`
- **НЕ** → използвайте `const`

```cpp
constexpr int DAYS_IN_WEEK = 7;         // Известно compile-time
const int todayTemp = getTemperature(); // Известно runtime
```
