#include "main.h"
#include <limits.h>

/**
*_atoi - convert a string to an integer
*@s: the string to convert
*
*Return: the converted integer, or 0 if s has no numbers
*/
int _atoi(char *s)
{
int i = 0, sign = 1;
unsigned long int num = 0;
while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
{
if (s[i] == '-')
sign *= -1;
i++;
}
while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
{
num = num * 10 + (s[i] - '0');
i++;
if (num - 1 > INT_MAX)
return (sign == -1 ? INT_MIN : INT_MAX);
}
return (sign *num);
}

