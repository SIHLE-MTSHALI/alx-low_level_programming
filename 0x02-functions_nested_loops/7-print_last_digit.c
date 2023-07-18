#include "main.h"
/**
*print_last_digit - Prints the last digit of a number
*@n: The number to be checked
*
*Return: The value of the last digit of number n
*/
int print_last_digit(int n)
{
int ld = n % 10;
if (ld < 0)
ld *= -1;
_putchar('0' + ld);
return (ld);
}

