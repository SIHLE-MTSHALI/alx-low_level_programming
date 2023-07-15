#include <stdio.h>

/**
 * main - Entry point of the program
 *
 *This program prints the lowercase alphabet in reverse,
 *followed by a new line.
 *
 * Return: (0) - Always success
 */
int main(void)
{
int letter = 'z';

/* Print alphabet in reverse */
while (letter >= 'a')
{
putchar(letter);
letter--;
}

putchar('\n'); /* Print newline character */

return (0);
}
