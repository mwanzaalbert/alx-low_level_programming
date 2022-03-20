# Project: 0x00. C - Hello, World

## Description

This project contains nine scripts. Some of the scripts have been written to show the output of the different steps (i.e., ***Preprocessing, compilation, assembly, and linking***) involved to form an executable file from C source code.

## Requirements

### General
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on _Ubuntu 20.04 LTS_ using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files should end with a new line
* There should be **no errors** and **no warnings** during compilation
* You are not allowed to use `system`
* Your code should use the [***Betty style***](https://github.com/holbertonschool/Betty/wiki). It will be checked using `betty-style.pl` and `betty-doc.pl`
* All your scripts will be tested on _Ubuntu 20.04 LTS_
* All your scripts should be exactly **two lines long** (`$ wc -l file` should print `2`)
* The first line of all your files should be exactly `#!/bin/bash`
* The C file `main.c` will be saved in the variable `$CFILE`
* The `main.c` file contains:

  ```sh
  #include <stdio.h>

  /**
   * main - Entry point
   *
   * Return: Always 0 (Success)
   */
  int main(void)
  {
    return (0);
  }
  ```
  
### Tasks 
The following tasks introduces us to some of the concepts, functions used in c programming
NB: If you are working on another development environment other than that of ALX-Holberton, use the options in the [general requirements](https://github.com/mwanzaalbert/alx-low_level_programming/edit/master/0x00-hello_world/README.md#general) to compile your C file.

1. 0-Preprocessor
   * Write a script that runs the C file through the _preprocessor_ and save the result into another file.
   * The **output** should be saved in the file named `c`
2. 1-compiler
   * Write a script that compiles the C file **but** does not link.
   * The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
   * Example: if the C file is `main.c`, the output file should be `main.o`
3. 2-assembler
   * Write a script that that generates the assembly code of a C code and save it in an output file.
   * The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
   * Example: if the C file is `main.c`, the output file should be `main.s`  
4. 3-name
   * Write a script that compiles the C file and creates an executable named `cisfun`
5. 4-puts.c
   * Write a C program that prints exactly `"Programming is like building a multilingual puzzle, followed by a new line`.
     * Use the function `puts`
     * You are not allowed to use `printf`
     * Your program should end with the value `0` when you run the exit command `echo $?`
6. 5-printf.c
   * Write a C program that prints exactly with `proper grammar, but the outcome is a piece of art,`, followed by a new line.
     * Use the function `printf`
     * You are not allowed to use the function `puts`
     * Your program should return `0`
     * Your program should compile without warning when using the `-Wall` `gcc` option
7. 6-size.c
   * Write a C program that prints the size of various types on the computer it is compiled and run on.
   * Warnings are allowed
   * Your program should return `0`
   * You might have to install the package `libc6-dev-i386` on your Linux (Vagrant) to test the `-m32` `gcc` option
   * You should produce the exact same output as in the example below
      ```
      julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
      julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
      julien@ubuntu:~/c/0x00$ ./size32
      Size of a char: 1 byte(s)
      Size of an int: 4 byte(s)
      Size of a long int: 4 byte(s)
      Size of a long long int: 8 byte(s)
      Size of a float: 4 byte(s)
      julien@ubuntu:~/c/0x00$ ./size64
      Size of a char: 1 byte(s)
      Size of an int: 4 byte(s)
      Size of a long int: 8 byte(s)
      Size of a long long int: 8 byte(s)
      Size of a float: 4 byte(s)
      julien@ubuntu:~/c/0x00$ echo $?
      0
      julien@ubuntu:~/c/0x00$ 
      ```
8. 100-intel

9. 101-quote.c
