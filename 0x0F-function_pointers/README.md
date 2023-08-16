# Function Pointers in C

This project is a comprehensive exploration of function pointers in C programming. Function pointers enable functions to be treated as first-class citizens, allowing them to be assigned to variables, passed as arguments to other functions, and returned as values. Through various tasks, the project explores the use of function pointers for implementing callbacks, handling arrays, performing arithmetic operations, and even extracting the opcodes of a function. Here's a breakdown of each task in the project:

## Task 0: What's my name

This task involves writing a function that prints a name using function pointers.

- **File:** `0-print_name.c`
- **Description:** The function takes a name and a function pointer as arguments and prints the name according to the given function.

## Task 1: If you spend too much time thinking about a thing, you'll never get it done

In this task, we implement a function that iterates through an array and applies a given function to each element.

- **File:** `1-array_iterator.c`
- **Description:** The function takes an array, its size, and a function pointer to perform an operation on each element.

## Task 2: To hell with circumstances; I create opportunities

This task involves writing a function that searches for an integer in an array using a given comparison function.

- **File:** `2-int_index.c`
- **Description:** The function returns the index of the first element in the array for which the comparison function does not return 0. It returns -1 if no element matches or if the size is less than or equal to 0.

## Task 3: A goal is not always meant to be reached, it often serves simply as something to aim at

This task is about creating a simple calculator program that performs basic arithmetic operations.

- **Files:**
  - `3-main.c`: Contains the main function.
  - `3-op_functions.c`: Contains the functions for addition, subtraction, multiplication, division, and modulo.
  - `3-get_op_func.c`: Contains the function that selects the correct operation.
  - `3-calc.h`: Header file containing function prototypes and data structures.
- **Description:** The program takes three arguments (two numbers and an operator) and performs the specified operation.

## Task 4: Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker

This advanced task is about writing a program that prints the opcodes of its own main function.

- **File:** `100-main_opcodes.c`
- **Description:** The program takes a number of bytes as an argument and prints the opcodes of its own main function in hexadecimal.

## Conclusion

Through these tasks, we have delved into the powerful concept of function pointers in C. By treating functions as first-class objects, we can write more modular, reusable, and flexible code. Whether it's implementing callbacks, searching through arrays, or even working with low-level opcodes, function pointers open up a wide range of possibilities for C programmers.

**GitHub repository:** alx-low_level_programming
**Directory:** 0x0F-function_pointers

