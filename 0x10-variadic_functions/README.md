# Variadic Functions in C

This project explores the concept of variadic functions in C programming, allowing functions to accept a variable number of arguments. The tasks completed in this project demonstrate various applications of variadic functions and show how they can be used to handle different data types and scenarios.

## Task 0: Beauty is variable, ugliness is constant

This task involves writing a function that returns the sum of all its parameters.

- Prototype: `int sum_them_all(const unsigned int n, ...);`
- If `n == 0`, return `0`
- Files created:
  - `0-sum_them_all.c`: Contains the implementation of the function.
  - `0-main.c`: Main file to test the function.

## Task 1: To be is to be the value of a variable

This task involves writing a function that prints numbers, followed by a new line.

- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
- If the separator is NULL, don’t print it.
- Files created:
  - `1-print_numbers.c`: Contains the implementation of the function.
  - `1-main.c`: Main file to test the function.

## Task 2: One woman's constant is another woman's variable

This task involves writing a function that prints strings, followed by a new line.

- Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
- If the separator is NULL, don’t print it.
- If one of the strings is NULL, print `(nil)` instead.
- Files created:
  - `2-print_strings.c`: Contains the implementation of the function.
  - `2-main.c`: Main file to test the function.

## Task 3: To be is a to be the value of a variable

This task involves writing a function that prints anything.

- Prototype: `void print_all(const char * const format, ...);`
- `format` is a list of types of arguments passed to the function.
- `c`: char, `i`: integer, `f`: float, `s`: char * (if the string is NULL, print `(nil)` instead)
- Any other char should be ignored.
- Files created:
  - `3-print_all.c`: Contains the implementation of the function.
  - `3-main.c`: Main file to test the function.

## Conclusion

This project demonstrates the power and flexibility of variadic functions in C. By using this feature, functions can be designed to handle a varying number of arguments, allowing for more reusable and adaptable code. The tasks in this project cover different use cases, including handling numbers, strings, and even implementing a function that can print anything, showcasing the wide applications of variadic functions.

