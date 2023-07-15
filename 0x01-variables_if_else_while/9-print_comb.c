#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * prints all possible combinations of single-digit numbers,
 * separated by commas and spaces, in ascending order.
 *
 * Return: (0) - Always success
 */
int main(void)
{
int number = 0;

/* Print numbers from 0 to 9 */
while (number <= 9)
{
putchar(number + '0');

/* Add comma and space if not the last number */
if (number != 9)
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}

number++;
}

putchar('\n'); /* Print newline character */

return (0);
}
