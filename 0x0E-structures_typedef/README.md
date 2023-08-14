# Structures, Typedef in C

This project explores the use of structures and `typedef` in C programming. We 
define and manipulate a `struct` for storing information about dogs and perform 
various operations using functions.

## Files & Descriptions

### 0. Poppy

**File:** `dog.h`

Defines a new type `struct dog` with the following elements:
* `name`: type = `char *`
* `age`: type = `float`
* `owner`: type = `char *`

**Test Program:** `0-main.c`
* Initializes a `struct dog` and prints its content.

### 1. A dog is the only thing on earth that loves you more than you love yourself

**File:** `1-init_dog.c`
* Contains a function `init_dog` that initializes a variable of type `struct dog`.
* Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

**Test Program:** `1-main.c`
* Tests the `init_dog` function by initializing a `struct dog` and printing its content.

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

**File:** `2-print_dog.c`
* Contains a function `print_dog` that prints a `struct dog`.
* If an element of `d` is NULL, it prints `(nil)` instead of this element.
* If `d` is NULL, it prints nothing.
* Prototype: `void print_dog(struct dog *d);`

**Test Program:** `2-main.c`
* Tests the `print_dog` function by printing a `struct dog`.

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

**File:** `dog.h`
* Defines a new type `dog_t` as a new name for the type `struct dog`.

**Test Program:** `3-main.c`
* Tests the new `dog_t` typedef by initializing a variable of this type and printing its content.

### 4. A door is what a dog is perpetually on the wrong side of

**File:** `4-new_dog.c`
* Contains a function `new_dog` that creates a new dog.
* Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
* Returns NULL if the function fails.

**Test Program:** `4-main.c`
* Tests the `new_dog` function by creating a new dog and printing its content.

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

**File:** `5-free_dog.c`
* Contains a function `free_dog` that frees memory allocated for a `dog_t` structure.
* Prototype: `void free_dog(dog_t *d);`

**Test Program:** `5-main.c`
* Tests the `free_dog` function by creating a new dog, printing its content, and then freeing the memory.

Structures and typedef
