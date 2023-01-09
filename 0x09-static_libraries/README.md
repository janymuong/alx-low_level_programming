## C - Static Libraries
---
C - syntax for ```static libraries```, implimentation, and use cases.
This directory hosts two relevant files: a manually created static lib, ```libmy.a```, and script ```create_static_lib.sh``` file that creates a static library, 'not manually'.
The created created library can be tested/used with a sample main program:
```cat main.c```:
```bash
#include "main.h"

int main(void)
{
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    return (0);
}
```

The library can be used this way with the following commands(compiling and running the target program): ```gcc -std=gnu89 main.c -L. -lmy -o quote && ./quote```
