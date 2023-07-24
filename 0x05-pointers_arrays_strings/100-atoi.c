#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: The converted integer, or 0 if no conversion could be performed.
 */
int _atoi(char *s)
{
unsigned int num = 0;
int sign = 1;

while (*s)
{
if (*s == '-')
sign *= -1;

else if (*s >= '0' && *s <= '9')
{
while (*s >= '0' && *s <= '9')
{
if (num > (unsigned int) INT_MAX / 10 ||
(num == (unsigned int) INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
{
if (sign > 0)
return (INT_MAX);
else
return (INT_MIN);
}
num = num * 10 + (*s - '0');
s++;
}
break;
}
s++;
}
return (sign *num);
}

