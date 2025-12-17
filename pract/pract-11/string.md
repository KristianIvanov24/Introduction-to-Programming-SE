# std::string, потоци и работа с файлове в C++ - Помощен материал за курсови проекти

### ⚠️ std::string и работа с файлове <span style="color: red">НЕ</span> е част от стандартния курс по УП и може да се използва САМО в курсовите проекти и то САМО ако ръководителят на курсовия проект, който сте записали, разрешава. Демек, <span style="color: red">НЕ МОЖЕ</span> да го използвате на контролни, <span style="color: red">НЕ МОЖЕ</span> да го използвате за решаването на задачите в семинарите и практикумите и <span style="color: red">НЕ МОЖЕ</span> да го използвате на изпита.

## Увод в работа със std::string

### Какво е std::string?

`std::string` е класът в C++ за работа с низове, който автоматично управлява динамичната памет (за сега сте я взимали само на лекции) и предоставя много удобни функции, чрез които по-лесно да работим с низове.

За да използваме `std::string`, трябва да включим библиотеката `<string>`:
```c++
#include <string>
```
---
### Създаване на std::string
```c++
std::string name;                     // Празен низ
std::string greeting = "Helloo FMI";  // Низът "Helloo FMI"
std::string copy = greeting;          // Копие на greeting низа (аналог на strcpy)
std::string repeated(5, 'A');         // "AAAAA"
```

### Достъпване на символ по индекс
```c++
std::string text = "Hello";
char ch1 = text[0];       // 'H'
char ch2 = text[100];     // Undefined behaviour
char ch3 = text.back();   // Дава първия символ 'H'
char ch4 = text.front();  // Дава последния символ 'o'

text[0] = 'J';  // text = "Jello"
```

### Взимане на дължина на низ (аналог на strlen)
```c++
std::string text = "Hello World!"

size_t textLen1 = text.length() // 12
size_t textLen2 = text.size()   // 12
```

### Конкатенация (аналог на strcat)
```c++
std::string first = "Georgi";
std::string last = "Petrov";
std::string full1 = first + " " + last;             // "Georgi Petrov"

std::string full2 = "Aleksander" + " " + "Mandev";  // "Aleksander Mandev"

first += " Petrov";  // first = "Georgi Petrov"
```

### Сравняване на низове (аналог на strcmp)

```c++
std::string a = "abc";
std::string b = "abc";
std::string c = "xyz";

if (a == b) {  // true
    std::cout << "They are equal" << std::endl;
}

if (a < c) {   // true (lexicographic comparison)
    std::cout << "a comes before c alphabetically" << std::endl;
}
```

### Функции, които нямат аналог за c-style низовете и се налагаше сами да си ги имплементираме:

#### `string substr(size_t pos = 0, size_t len = npos)` - Извличане на подниз
```c++
std::string text = "Hello World";

std::string subAllArgsValid = text.substr(0, 5);  // "Hello" - от позиция 0 включително, взима 5 символа 
                                                  // (или по-малко ако низа от подадената позиция до края е по-кратък от 5 символа)
std::string subLenOOR = text.substr(0, 50);       // "Hello World"

std::string subPosOOR = text.substr(50);          // дава грешка, защото началната позиция е извън низа
std::string subOnlyPos = text.substr(6);          // "World" - от позиция 6 включително до края (докато не срещне '\0')

std::string subNoArgs = text.substr();            // "Hello World" - от позиция 0 включително до края
```
---
#### `void clear()` - Изчистване на съдържанието на низ
```c++
std::string text = "Hello";
text.clear();  // text = ""
```
---
#### `string& erase(size_t pos = 0, size_t len = npos)` - Изтриване на символи от низ
```c++
std::string text = "Hello World";

text.erase(0, 6);  // "World" - от позиция 0 включително изтрива 6 символа 
                   // (или по-малко ако низа от подадената позиция до края е по-кратък от 6 символа)
text.erase(0, 50); // ""

text.erase(50);    // дава грешка, защото началната позиция е извън низа
text.erase(5);     // "Hello" - изтрива от позиция 5 включително до края (докато не срещне '\0')

text.erase();      // "" - изтрива от позиция 0 включително до края
```
---
#### `string& insert(size_t pos, const string& str)` - Вмъкване на текст
> Има и други overload-и на функцията insert, може да ги разгледате от:
> https://cplusplus.com/reference/string/string/insert/
```c++
std::string text = "Hello";
text.insert(5, " World");   // "Hello World" - на позиция 5 вмъква подадения низ
text.insert(50, " World");  // дава грешка, защото началната позиция е извън низа
```
---
#### `string& replace(size_t pos, size_t len, const string& str)` - Замяна на част от низа
> Има и други overload-и на функцията replace, може да ги разгледате от:
> https://cplusplus.com/reference/string/string/replace/
```c++
std::string text = "Hello World";
text.replace(6, 5, "C++");  // "Hello C++" - на позиция 6 замества следващите 5 символа с подадения низ
                            // (или по-малко ако низа от подадената позиция до края е по-кратък от 5 символа)
text.replace(6, 100, "C++") // "Hello C++"

text.replace(50, 5, "C++");  // дава грешка, защото началната позиция е извън низа
```
---
#### `size_t find(const string& str, size_t pos = 0)` - Търсене на подниз в низ
> Има и други overload-и на функцията find, може да ги разгледате от:
> https://cplusplus.com/reference/string/string/find/
```c++
std::string text = "Hello World";
size_t pos = text.find("World");     // 6 - връща позицията, на която започва подниза "World" в низа text
size_t pos = text.find("xyz");       // връща std::string::npos, което е константа със стойност - максималната стойност за size_t

size_t pos = text.find("World", 5);  // 6 - може да подадем като втори параметър, от коя позиция нататък да търси
size_t pos = text.find("Hello", 5);  // std::string::npos
                                   

// Проверка дали .find(...) е намерило подниза
if (pos != std::string::npos) {
    std::cout << "Found at position: " << pos << std::endl;
}
```
---
#### `const char* c_str()` - Преобразуване към C-style низ
```c++
std::string name = "Ivan";
const char* cstr = name.c_str();  // Ако ви се наложи да работите със c-style репрезентацията на някой низ
```
---

### Четене на низове от конзолата

```c++
char wordCStyle[512];
std::cin >> wordCStyle; // Чете докато не срещне whitespace character (' ', '\n', '\r', '\t' и т.н.)
                        // Ако се въведе низ по-дълъг от 512 символа е undefined behaviour,
                        // защото при записването, ще излезем извън рамките на низа
                        // Важно е да се отбележи, че cin >> слага '\0' в края на низа

std::string word;
std::cin >> word;  // Чете докато не срещне whitespace character (' ', '\n', '\r', '\t' и т.н.)


char lineCStyle[512 + 1];
std::cin.getline(lineCStyle, 512);  // Чете c-style низ докато не срещне '\n' или не прочете 512 символа,
                                    // Важно е да се отбележи, че getline слага '\0' в края на низа
                                    // Затова е препоръчително низът ни е да е с поне един character повече отколкото четем
                                    // за да има място да се сложи '\0' без да презаписва 512-тия прочетен символ


std::cin.getline(lineCStyle, 512, 'X');  // Чете c-style низ докато не срещне 'X' или не прочете 512 символа

std::string lineModernCPPStyle;
std::getline(std::cin, lineModernCPPStyle);  // Чете std::string низ докато не срещне '\n'
                                             // Забележете, че тук няма нужда да посочваме максимален брой символи за четене
                                             // защото std::string е реализиран чрез динамичен масив, който може да променя
                                             // размера си по време на изпълнение на програмата (runtime)
```
---
При четене на каквото и да е било чрез `cin`, когато натиснем Enter, 
в буфера (може да си го представяте като масив), 
който пази прочетените от конзолата символи, се запазва `'\n'`.
Ако в последствие прочетем нещо с `getline`, ще се прочете празен низ `""` винаги. 
Затова ако ни се налага да използваме `getline` след `cin`,
трябва някак да "изчистим" този `'\n'`

```c++
// inputBuffer = [] => масива, в който се пази всичко въведено от конзолата
//          gptr ^  => указател, който следи до къде сме прочели (get pointer)
int someNum;
std::cin >> someNum; // Въвеждаме 5 и натискаме Enter => someNum = 5;
                     // cin премества gptr на '\n'
// inputBuffer = [5, '\n']
//              gptr ^

std::string line1;
std::getline(std::cin, line1); // getline веднага вижда '\n' и приключва четенето
                               // gptr остава на '\n'
// inputBuffer = [5, '\n']
//              gptr ^
```
Решение (std::ws):
```c++
// inputBuffer = [5, '\n']
//              gptr ^
std::cin >> std::ws;  // премества gptr докато не стигне края на inputBuffer-а или non-whitespace символ
                      // може да се каже, че "изхвърля"/dump-ва всички whitespace символи
// inputBuffer = [5, '\n']
//                  gptr ^
```
или примерно ако:
```c++
// inputBuffer = [5, ' ', '\n', '1', '2']
//              gptr ^
std::cin >> std::ws
// inputBuffer = [5, ' ', '\n', '1', '2']
//                         gptr ^
```
> Това изобщо не е единственото решение на проблема, има и много други начини, 
> но показваме само този, защото е най-лесен за разбиране предположение, че не сте учили потоци.
> Ще се запознаем по-обстойно още на 1вото упражнение по ООП 2 семестър.
---

### Преобразуване между типове (аналог на функциите, които писахме при работа с бройни системи за преобразуване на низ в число и от число в низ)

#### От string към число
`int stoi/long stol/...(const string& str, size_t* idx = 0, int base = 10)`

`int stod(const string& str, size_t* idx = 0)`

> Именуването на функциите идва от "string to type"
```c++
std::string numStr = "123";
int i = std::stoi(numStr);      // 123 - Превръща низ репрезентиращ цяло число в десетична бройна система в int
long l = std::stol("1000000");  // 1000000 - Превръща низ репрезентиращ цяло число в десетична бройна система в long
double d = std::stod("3.14");   // 3.14 - Превръща низ репрезентиращ число с плаваща запетая в long

int invalid1 = std::stoi("asd")          // ще даде грешка, защото не е подадено низ репрезентиращо число
int invalid2 = std::stoi("9999999999")   // ще даде грешка, защото е подаден низ репрезентиращ число извън рамките на типа,
                                         // в който функцията трябва да превърне низа

std::stoi("1001101", nullptr, 2);   // 77 - Превръща низ репрезентиращ цяло число в двоична бройна система в int
std::stoi("0b1001101", nullptr, 2); // 77 - Ще работи и при налична c++ анотация "0b" за число в двоична бройна система
```

#### От число към string
```c++
int num = 42;
std::string str = std::to_string(num);  // "42"

int numBase2 = 0b101101;
std::string strFromBase2 = std::to_string(numBase2);  // "45"
```


### std::string има и много други функции, който иска да ги разгледа може да го направи от тук:
> https://cplusplus.com/reference/string/string/

