#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * prints all possible different combinations of three digits,
 * separated by commas and spaces, in ascending order.
 *
 * Return: (0) - Always success
 */
int main(void)
{
int hundreds_digit = 0;
int tens_digit;
int ones_digit;

/* Loop through hundreds digit from 0 to 7 */
while (hundreds_digit <= 7)
{
tens_digit = hundreds_digit + 1;
/* Loop through tens digit from tens_digit to 8 */
while (tens_digit <= 8)
{
ones_digit = tens_digit + 1; /* Set ones digit to next number */

/* Loop through ones digit from ones_digit to 9 */
while (ones_digit <= 9)
{
putchar(hundreds_digit + '0'); /* Print hundreds digit */
putchar(tens_digit + '0'); /* Print tens digit */
putchar(ones_digit + '0'); /* Print ones digit */
/* Add comma and space if not the last combination */
if (hundreds_digit != 7 || tens_digit != 8 || ones_digit != 9)
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}

ones_digit++; /* Increment ones digit */
}

tens_digit++; /* Increment tens digit */
}

hundreds_digit++; /* Increment hundreds digit */
}

putchar('\n'); /* Print newline character */

return (0);
}

