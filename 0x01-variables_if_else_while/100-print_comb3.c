#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * prints all possible different combinations of two digits,
 * separated by commas and spaces, in ascending order.
 *
 * Return: (0) - Always success
 */
int main(void)
{
int tens_digit = 0;
int ones_digit;

/* Loop through tens digit from 0 to 8 */
while (tens_digit <= 8)
{
ones_digit = tens_digit + 1;

/* Loop through ones digit from ones_digit to 9 */
while (ones_digit <= 9)
{
putchar(tens_digit + '0'); /* Print tens digit */
putchar(ones_digit + '0'); /* Print ones digit */

/* Add comma and space if not the last combination */
if (tens_digit != 8 || ones_digit != 9)
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}

ones_digit++; /* Increment ones digit */
}

tens_digit++; /* Increment tens digit */
}

putchar('\n'); /* Print newline character */

return (0);
}

