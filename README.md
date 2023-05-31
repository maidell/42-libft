# 42-libft

![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)

This repository contains my implementation of the standard C library functions as part of the 42 São Paulo curriculum.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

42-libft is a library that contains my own implementation of various standard C library functions. The purpose of this project is to recreate these functions from scratch in order to gain a deeper understanding of their inner workings and improve my programming skills.

The library includes functions for manipulating strings, memory management, linked lists, and more. By using the 42-libft library, you can have a reliable and consistent set of functions for your C projects, without relying on the standard library.

This project also serves as a foundation for future projects within the 42 São Paulo curriculum, as many subsequent projects require the use of these custom library functions.

## Usage

To use the 42-libft library in your own projects, you can follow these steps:

1. Clone the repository to your local machine using the following command:

```
git clone https://github.com/maidell/42-libft.git
```


2. Include the necessary files in your project.

```c
#include "libft.h"
```

3. Compile your project with the library.
```shell
gcc -Wall -Wextra -Werror -I./libft -L./libft -lft your_file.c -o your_program
```

4. Use the functions from the library in your code.
```c
#include "libft.h"

int main()
{
    char *str = "Hello, World!";
    ft_putstr(str);
    return 0;
}
```
Compile and run your program to see the results.

Feel free to explore the repository, review the implementation, and adapt the code for your own projects.

## Contributing

Contributions to this repository are not currently accepted, as it represents my personal implementation of the standard C library functions. However, you can fork the repository and modify the code for your own use or create your own version of the library.

## License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT) - see the [LICENSE](LICENSE) file for more details.




