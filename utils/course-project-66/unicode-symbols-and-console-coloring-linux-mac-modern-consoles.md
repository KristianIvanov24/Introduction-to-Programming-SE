# Оцветяване на конзола и използване на Unicode символи (Linux, macOS)

> Информацията в този README файл работи за Linux, macOS и съвременни Windows конзоли (Windows Terminal, PowerShell 7+).

## Символи за боите

```cpp
std::cout << "\u2660";  // ♠ Спатия (Spades)
std::cout << "\u2665";  // ♥ Купа (Hearts)
std::cout << "\u2666";  // ♦ Каро (Diamonds)
std::cout << "\u2663";  // ♣ Спатия (Clubs)
```

За Linux и macOS символите работят директно, без допълнителна настройка.

> Други интересни символи, които може да разгледате и използвате: https://symbl.cc/en/unicode-table/#miscellaneous-symbols

## Оцветяване (ANSI escape codes)

```cpp
#include <iostream>

void setColor(const char* color) {
    std::cout << color;
}
```

### Основни цветове представени в enum class

```cpp
enum class Color
{
    Reset,
    Black,
    Red,
    Green,
    Yellow,
    Blue,
    Magenta,
    Cyan,
    White,
    BrightBlack,
    BrightRed,
    BrightGreen,
    BrightYellow,
    BrightBlue,
    BrightMagenta,
    BrightCyan,
    BrightWhite
};

const char* getColorCode(Color color) {
    switch(color) {
        case Color::Reset: return "\033[0m";
        case Color::Black: return "\033[30m";
        case Color::Red: return "\033[31m";
        case Color::Green: return "\033[32m";
        case Color::Yellow: return "\033[33m";
        case Color::Blue: return "\033[34m";
        case Color::Magenta: return "\033[35m";
        case Color::Cyan: return "\033[36m";
        case Color::White: return "\033[37m";
        case Color::BrightBlack: return "\033[90m";
        case Color::BrightRed: return "\033[91m";
        case Color::BrightGreen: return "\033[92m";
        case Color::BrightYellow: return "\033[93m";
        case Color::BrightBlue: return "\033[94m";
        case Color::BrightMagenta: return "\033[95m";
        case Color::BrightCyan: return "\033[96m";
        case Color::BrightWhite: return "\033[97m";
        default: return "\033[0m";
    }
}

void setColor(Color color) {
    std::cout << getColorCode(color);
}
```

### Пример за оцветяване

```cpp
#include <iostream>

int main() {
    setColor(Color::BrightWhite);
    std::cout << "A\u2660 ";  // A♠
    
    setColor(Color::BrightRed);
    std::cout << "K\u2665 ";  // K♥
    
    setColor(Color::BrightRed);
    std::cout << "Q\u2666 ";  // Q♦
    
    setColor(Color::BrightWhite);
    std::cout << "J\u2663";   // J♣
    
    setColor(Color::Reset);
    std::cout << std::endl;
    
    return 0;
}
```