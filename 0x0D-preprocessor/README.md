# C - Preprocessor

This project focuses on understanding and utilizing the C preprocessor, which is a part of the compilation process. Specifically, the tasks involve creating and using macros, both object-like and function-like.

## Tasks

### 0. Object-like Macro

**File:** `0-object_like_macro.h`

Defines a macro named `SIZE` as an abbreviation for the token `1024`.

**Test File:** `0-main.c`

This file includes the header and tests the `SIZE` macro by adding it to the number 98 and printing the result.

### 1. Pi

**File:** `1-pi.h`

Defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

**Test File:** `1-main.c`

This file includes the header and tests the `PI` macro by calculating the area of a circle with radius 98 and printing the result.

### 2. File name

**File:** `2-main.c`

A program that prints its own filename using the predefined `__FILE__` macro. 

When compiled and run, this program prints the name of the file it was compiled from.

### 3. Function-like macro

**File:** `3-function_like_macro.h`

Defines a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

**Test File:** `3-main.c`

This file includes the header and tests the `ABS` macro with both positive and negative numbers, and then prints the results.

### 4. SUM

**File:** `4-sum.h`

Defines a function-like macro `SUM(x, y)` that computes the sum of two numbers `x` and `y`.

**Test File:** `4-main.c`

This file includes the header and tests the `SUM` macro with numbers 98 and 1024, and then prints the result.

## Compilation

All files were compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.

## Author

Sihle Mtshali
