# 0x0A-argc_argv Project

This project focuses on creating programs that manipulate and evaluate command-line arguments in C. It covers the use of functions like `atoi` and libraries like `<stdio.h>` and `<stdlib.h>`.

## Files and Descriptions

### 0-whatsmyname.c

This program prints its name, including the path, followed by a new line. It illustrates the use of command-line arguments to access the program's name.

### 1-args.c

This program prints the number of arguments passed to it, followed by a new line. It showcases the handling of the `argc` parameter to count command-line arguments.

### 2-args.c

This program prints all the arguments it receives, one per line. It demonstrates the use of loops to iterate over command-line arguments.

### 3-mul.c

A program that multiplies two numbers passed as command-line arguments. It implements error handling to ensure that exactly two arguments are provided.

### 4-add.c

A program that adds positive numbers provided as command-line arguments. It includes error checking to ensure that all characters in the arguments are digits.

### 100-change.c

An advanced task that prints the minimum number of coins to make change for a given amount of money, using specific coin denominations. It includes extensive error handling and arithmetic operations.

## Summary

These programs explore various aspects of command-line argument handling in C. They utilize the `argc` and `argv` parameters in the `main` function, along with functions such as `atoi` from the `<stdlib.h>` library to convert strings to integers. Error handling is a prominent theme, ensuring that the correct number of arguments is provided and that they are in the expected format. The use of loops and conditionals is prevalent, allowing for iterative processing of arguments and logical decision-making. Libraries such as `<stdio.h>` for input and output and `<ctype.h>` for character classification (e.g., `isdigit`) are used throughout. These tasks provide a comprehensive look at argument handling and basic error checking in C programming.

