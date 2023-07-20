#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, excluding 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
int i;

/* loop from 0 to 9 */
for (i = 0; i < 10; i++)
{
/* check if number is not 2 or 4 */
if (i != 2 && i != 4)
{
/* print the number */
_putchar(i + '0');
}
}

/* print a new line */
_putchar('\n');
}

