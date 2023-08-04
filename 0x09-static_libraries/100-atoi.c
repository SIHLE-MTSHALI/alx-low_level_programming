#include "main.h"

/**
* _atoi - Converts a string to an integer.
* @s: The string to be converted.
* Return: The integer value of the string.
*/

int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;

while (*s)
{
if (*s == '-')
sign *= -1;

if (*s >= '0' && *s <= '9')
{
num *= 10;
num += *s - '0';
if (*(s + 1) < '0' || *(s + 1) > '9')
break;
}
s++;
}

return (sign *num);
}

