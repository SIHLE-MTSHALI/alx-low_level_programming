#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_exit - Prints "Error" and exits with status 98
 */
void error_exit(void)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}

/**
 * is_digit - Check if a string has only digits
 * @s: String to check
 *
 * Return: 1 if string has only digits, otherwise 0
 */
int is_digit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

/**
 * main - Entry point, multiplies two numbers
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
unsigned long num1, num2, result;
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
error_exit();
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%lu\n", result);
return (0);
}

