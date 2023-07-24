#include "main.h"

/**
* puts_half - prints the second half of a string
* @str: pointer to the string
*
* Return: Nothing.
*/
void puts_half(char *str)
{
int i = 0, n;

while (str[i] != '\0')
{
i++;
}

n = i / 2;

if (i % 2)
{
n++;
}

while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}

