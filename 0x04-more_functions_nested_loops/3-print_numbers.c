#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
int i;

/* loop from 0 to 9 */
for (i = 0; i < 10; i++)
{
/* print the number */
_putchar(i + '0');
}

/* print a new line */
_putchar('\n');
}

