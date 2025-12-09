# Указатели. Символни низове.

## Въведение в указателите.
### Оператор &

 - Приема променлива от тип Т.
 - Връща указател от тип T*.
 
 
```c++
  int number = 10;
  int& number2 = number;
  std::cout << --number << number2;    
``` 

### Оператор *  (дерефериране)
- Приема указaтел от тип Т*
- Връща променлива от тип Т


```c++
  int number = 10;
  int* ptr = &number;
  int result = *ptr; 
  cout << result; //10
```

### Разлика между указател и референция?

 - Указателят може да се пренасочва (reassign), рефернцията - не
```c++
  int n = 10, m = 11;
  int& ref = n;
  int* ptr = &n;
  ref = m; // n = m
  cout << n; // 11

  ptr = &m;
  cout << ptr; // address of m
```
 - Референцията трябва да се инициализира при създаването.
 ```c++
  int& ref; // error
  int* ptr; // OK
```
 - Указателят има неутрална стойност (nullptr), а референцията няма.
  ```c++
  int* ptr = nullptr;
```
 - Може да се направи масив от указатели, но не и масив от референции.

```c++
  int** ptr;
```

### Указателна аритметика

```c++
int arr[] = {1, 2, 3};
int* ptr = arr;
cout << ptr[0]; //1;

ptr++;
cout << ptr[1]; //2;

ptr += 2;
cout << ptr[0] << ' ' << *ptr; // 3 3
```
![enter image description here](https://i.ibb.co/cDcX8st/Untitled-Diagram-drawio-3.png)

 ![enter image description here](https://i.ibb.co/xLLsVK5/Untitled-Diagram-drawio-4.png)

### Размера на указателя
Зависи от архитектурата на процесора:
- x86 (32-bit) - 4 байта
- x64 (64-bit) - 8 байта

```c++
cout << sizeof(int*) << sizeof(double*) << sizeof(char*);
```

### Константни указатели и указатели към константи
- Указател към константа

```c++
const int* p = &x;  // или int const* p
*p = 10; // грешка
p = &y;  // позволено
```

- Константен указател

```c++
int* const p = &x;
*p = 10;  // позволено
p = &y;   // грешка
```

- Константен указател към константа

```c++
const int* const p = &x;
```

### Spiral rule
Правилото гласи, започнете от името на променливата и се придвижваме по посока на часовниковата стрелка до следващия указател или тип.
```c++
const int * const == int const * const – константен указател към константа

( int *) * const – константен указател към указател от тип int

( (int ) * const )* - указател към константен указател към int

( ( int const ) *) * - двоен указател към константа от тип int

( ( int ) * const ) * const – константен указател към константен указател към int

( ( const int ) * const ) * const – константен указател към константен указател към константа от тип int
```

### Работа с функции
- Аргументи на функция
```c++
void inc(int* p) 
{ 
    (*p)++; 
}

void printArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

void dec(int& x) 
{ 
    x--; 
}

int main()
{
    int x = 5;
    inc(&x);
    cout << x;  // 6

    // inc(nullptr);

    int arr[5] = {1, 2, 3, 4, 5};
    printArr(arr, 5); // arr се преобразува до int*

    int a = 5;
    dec(a);
    cout << a; // 4
}
```
- Връщане на указател
```c++
int* getMax(int* a, int* b) 
{
    return (*a > *b) ? a : b;
}

int* bad() 
{
    int x = 5;
    return &x; // x ще бъде унищожена, връщаме висящ указател
}
```
- Връщане на референция - позволено само ако обектът продължава да съществува след края на функцията.
```c++
int& getElement(int arr[], int index) 
{
    return arr[index];
}

int& badRef() 
{
    int x = 10;
    return x; // недефинирано поведение
}

```
## Въведение в символните низове (стрингове).

```c++
char str[] = {'t', 'e', 's', 't', '\0'};
char str2[] = "test"; //equivalent to str
char str3[7] = "test";
char str4[] = {'t','e','s','\0','t'}; // реалният стринг е "tes"
```

![enter image description here](https://i.ibb.co/ZmRwt6R/Untitled-Diagram-drawio-5.png)

### Tерминираща нула - \0
- Първият символ в ASCII таблицата, с код 0 – т.е char(0).
- Брои се като елемент и влияе на размера на масив.
- Използва се като прекъсвач (терминатор) от много функции за символни низове, за да се определя края на низа.

## Примерна имплементация на:
 - strlen (намиране на дължина на стринг)
 - strcpy (копиране на стринг)
 - strcat (конкатениране на стрингове)
 - strcmp (лексикографско сравнение на стрингове)
 - atoi (преобразуване на стринг в число)
