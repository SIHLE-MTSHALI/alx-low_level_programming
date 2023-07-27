# Pointers, Arrays and Strings in C

This repository contains code written for learning and practicing manipulation of pointers, arrays and strings in C. The repository contains the following tasks:

## Tasks

### Task 0 - strcat

File: `0-strcat.c`

A function that concatenates two strings. This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte. It returns a pointer to the resulting string `dest`.

### Task 1 - strncat

File: `1-strncat.c`

A function that concatenates two strings. The `_strncat` function is similar to the `_strcat` function, except that it will use at most `n` bytes from `src` and `src` does not need to be null-terminated if it contains `n` or more bytes. It returns a pointer to the resulting string `dest`.

### Task 2 - strncpy

File: `2-strncpy.c`

A function that copies a string. This function should work exactly like `strncpy`.

### Task 3 - strcmp

File: `3-strcmp.c`

A function that compares two strings. This function should work exactly like `strcmp`.

### Task 4 - reverse_array

File: `4-rev_array.c`

A function that reverses the content of an array of integers. The function takes an array `a` and an integer `n` as parameters, where `n` is the number of elements of the array.

### Task 5 - string_toupper

File: `5-string_toupper.c`

A function that changes all lowercase letters of a string to uppercase.

### Task 6 - cap_string

File: `6-cap_string.c`

A function that capitalizes all words of a string.

### Task 7 - leet

File: `7-leet.c`

A function that encodes a string into 1337. Letters `a` and `A` should be replaced by `4`, letters `e` and `E` should be replaced by `3`, letters `o` and `O` should be replaced by `0`, letters `t` and `T` should be replaced by `7`, and letters `l` and `L` should be replaced by `1`.

### Task 8 - rot13

File: `100-rot13.c`

A function that encodes a string using rot13.

### Task 9 - print_number

File: `101-print_number.c`

A function that prints an integer.

### Task 10 - magic

File: `102-magic.c`

A code that prints `a[2] = 98`, followed by a new line.

### Task 11 - infinite_add

File: `103-infinite_add.c`

A function that adds two numbers.

### Task 12 - print_buffer

File: `104-print_buffer.c`

A function that prints a buffer.

## Usage

Each file in this repository can be compiled with the `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o output_file` command. Then, you can run the program with `./output_file`.

## Contributing

This project is for learning purposes, hence not open for contribution.

## License

Public Domain. No rights reserved.

