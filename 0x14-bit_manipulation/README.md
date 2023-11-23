# Bit Manipulation Project

This project encompasses a series of tasks involving bit manipulation in C programming. Each task requires the creation of specific functions dealing with binary operations, without the use of standard libraries or typical operators for some tasks. The tasks are designed to enhance understanding of bitwise operators in C and how they can be used to manipulate data at the bit level.

## Tasks Overview

### Task 0: Convert Binary to Unsigned Int
- **File**: `0-binary_to_uint.c`
- **Description**: A function that converts a binary number to an unsigned int. It handles invalid inputs (non 0 or 1 characters, NULL input) by returning 0.
- **Prototype**: `unsigned int binary_to_uint(const char *b);`

### Task 1: Print Binary
- **File**: `1-print_binary.c`
- **Description**: This function prints the binary representation of a number without using arrays, malloc, or the % and / operators.
- **Prototype**: `void print_binary(unsigned long int n);`

### Task 2: Get Bit at Given Index
- **File**: `2-get_bit.c`
- **Description**: A function that returns the value of a bit at a given index.
- **Prototype**: `int get_bit(unsigned long int n, unsigned int index);`
- **Returns**: The value of the bit at the given index, or -1 if an error occurred.

### Task 3: Set Bit at Given Index
- **File**: `3-set_bit.c`
- **Description**: Sets the value of a bit to 1 at a specified index.
- **Prototype**: `int set_bit(unsigned long int *n, unsigned int index);`
- **Returns**: 1 if it worked, or -1 if an error occurred.

### Task 4: Clear Bit at Given Index
- **File**: `4-clear_bit.c`
- **Description**: Sets the value of a bit to 0 at a specified index.
- **Prototype**: `int clear_bit(unsigned long int *n, unsigned int index);`
- **Returns**: 1 if it worked, or -1 if an error occurred.

### Task 5: Flip Bits
- **File**: `5-flip_bits.c`
- **Description**: Returns the number of bits needed to flip to get from one number to another.
- **Prototype**: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- **Restrictions**: No use of the % or / operators.

### Task 6: Check Endianness
- **File**: `100-get_endianness.c`
- **Description**: Checks the endianness of the system.
- **Prototype**: `int get_endianness(void);`
- **Returns**: 0 if big endian, 1 if little endian.

### Task 7: Crackme3
- **File**: `101-password`
- **Description**: A challenge to find the password for a given program. The password is saved in the file `101-password`, containing the exact password without any extra space or new line.
- **Objective**: Run the program successfully with the password.

