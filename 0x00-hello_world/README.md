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
* Your code should use the ***Betty style***. It will be checked using `betty-style.pl` and `betty-doc.pl`
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
  
### Task (aka script_name)

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

6. 5-printf.c

7. 6-size.c

8. 100-intel

9. 101-quote.c
