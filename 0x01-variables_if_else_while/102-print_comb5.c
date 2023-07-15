#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * all possible combinations of two two-digit numbers,
 * separated by a space and comma, in ascending order.
 *
 * Return: (0) - Always success
 */
int main(void)
{
int num1 = 0; /* First two-digit number */
int num2; /* Second two-digit number */
/* Loop through the first two-digit number from 0 to 99 */
while (num1 <= 99)
{
num2 = num1 + 1;
/* Loop through the second two-digit number from num2 to 99 */
while (num2 <= 99)
{
putchar((num1 / 10) + '0'); /* Print the tens digit of num1 */
putchar((num1 % 10) + '0'); /* Print the ones digit of num1 */
putchar(' '); /* Print a space */
putchar((num2 / 10) + '0'); /* Print the tens digit of num2 */
putchar((num2 % 10) + '0'); /* Print the ones digit of num2 */
/* Add comma and space if not the last combination */
if (num1 != 98 || num2 != 99)
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}
num2++; /* Increment the second two-digit number */
}

num1++; /* Increment the first two-digit number */
}
putchar('\n'); /* Print newline character */
return (0);
}
