# Оцветяване на конзола и използване на Unicode символи (Windows)

> Информацията в README файлва работи само за Windows.

## Символи за боите

```cpp
std::cout << "\u2660";  // ♠ Спатия (Spades)
std::cout << "\u2665";  // ♥ Купа (Hearts)
std::cout << "\u2666";  // ♦ Каро (Diamonds)
std::cout << "\u2663";  // ♣ Спатия (Clubs)
```

За да работят символите, трябва в началото на програмата ни да зададем с какъв encoding да работи конзолата:

```cpp
SetConsoleOutputCP(CP_UTF8);
```

> Други интересни символи, които може да разгледате и използвате: https://symbl.cc/en/unicode-table/#miscellaneous-symbols

## Оцветяване (windows.h)

```cpp
#include <windows.h>

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
```

### Основни цветове представени в enum class

```c++
enum class Color
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Aqua = 3,
	Red = 4,
	Purple = 5,
	Yellow = 6,
	White = 7,
	Gray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightAqua = 11,
	LightRed = 12,
	LightPurple = 13,
	LightYellow = 14,
	BrightWhite = 15
};
```

### Пример за оцветяване

```cpp
#include <windows.h>
#include <iostream>

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    setColor(Color::BrightWhite);
    std::cout << "A\u2660 ";  // A♠
    
    setColor(Color::LightRed);
    std::cout << "K\u2665 ";  // K♥
    
    setColor(Color::LightRed);
    std::cout << "Q\u2666 ";  // Q♦
    
    setColor(Color::BrightWhite);
    std::cout << "J\u2663";   // J♣
    
    setColor(Color::White);
    std::cout << std::endl;
    
    return 0;
}
```
