#include <stdio.h>

/**
 * main - Entry point of the program
 *
 *prints all single digit numbers of base 10 starting from 0,
 *ollowed by a new line.
 *
 * Return: (0) - Always success
 */
int main(void)
{
int number = 0;

/* Print numbers from 0 to 9 */
while (number <= 9)
{
putchar(number++ + '0');
}

putchar('\n'); /* Print newline character */

return (0);
}

