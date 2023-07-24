#include "main.h"

/**
* print_rev - prints a string, in reverse
* @s: pointer to the string
*
* Return: Nothing.
*/
void print_rev(char *s)
{
int length = 0;
while (s[length])
{
length++;
}
while (length > 0)
{
_putchar(s[--length]);
}
_putchar('\n');
}

