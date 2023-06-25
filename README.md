# Printf Project

[![forthebadge](https://forthebadge.com/images/badges/ages-18.svg)](#)
[![forthebadge](https://forthebadge.com/images/badges/powered-by-coffee.svg)](#)
[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](#)

This project is a group project that focuses on implementing a custom version of the `printf` function in C. The purpose of this project is to enhance our understanding of variadic functions, formatting, and the use of standard input/output functions.

![Meme](/images/ai-bot.gif)

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- In the provided examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repository. We will use our own `main.c` files at compilation. Our `main.c` files might be different from the ones shown in the examples.
- The prototypes of all your functions should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the `_putchar` function for this project

### GitHub

- There should be one project repository per group. The other members should not fork or clone the project to ensure only one member has the repository in their GitHub account. Otherwise, there is a risk of scoring 0%.

## More Info

### Authorized functions and macros

- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start` (man 3 va_start)
- `va_end` (man 3 va_end)
- `va_copy` (man 3 va_copy)
- `va_arg` (man 3 va_arg)

### Compilation

Your code will be compiled using the following command:

`$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`


As a consequence, be careful not to push any C file containing a `main` function in the root directory of your project. You can create a separate test folder containing all your test files, including the `main` functions. Our main files will include your main header file (`main.h`) using the following line:

```c
#include "main.h"
```

You might want to look at the GCC flag `-Wno-format` when testing with your `_printf` and the standard `printf`.