#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * program prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: (0) - Always success
 */
int main(void)
{
int number = 0;
char letter;

/* Print numbers from 0 to 9 */
while (number <= 9)
{
putchar(number + '0');
number++;
}

/* Print letters a to f */
letter = 'a';
while (letter <= 'f')
{
putchar(letter);
letter++;
}

putchar('\n'); /* Print newline character */

return (0);
}
