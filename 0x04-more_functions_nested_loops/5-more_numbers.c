#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
int i, j;

/* loop for 10 times */
for (i = 0; i < 10; i++)
{
/* loop from 0 to 14 */
for (j = 0; j <= 14; j++)
{
/* check if number is greater than 9 */
if (j > 9)
{
/* print the first digit */
_putchar(j / 10 + '0');
}
/* print the last digit */
_putchar(j % 10 + '0');
}

/* print a new line */
_putchar('\n');
}
}

