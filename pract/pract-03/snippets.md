# Практикум 03 | 20.10.2026 | Code snippets

## Snippet 01

```c++
#include <iostream>

int main()
{
    int i = 6;
    while (std::cout << i, ----i)
    {

    }
}
```

## Snippet 02

```c++
#include <iostream>

int main() {
    for (size_t i = 0; i < 5; i++); 
    {
        std::cout << "FMI" << std::endl;
    }
}
```

## Snippet 03

```c++
#include <iostream>

int main() {
    for (;;) 
    {
        std::cout << "FMI" << std::endl;
    }
}
```

## Snippet 04

```c++
#include <iostream>

int main() {
    for (int i = 0; i < 2; i++)
    {
        for (int i = 0; i < 5; ++i)
        {
            if (i == 2)
            {
                continue;
            }
            std::cout << i << " ";
        }

        std::cout << i << " ";
    }
}
```

## Snippet 05

```c++
#include <iostream>

int main() {
    for (int i = 0; i < 5; i++) {
        if (i = 2)
        {
            break;
        }
        std::cout << i << " ";
    }
}
```