#include "main.h"

/**
* _strcmp - Compares two strings.
* @s1: The first string to be compared.
* @s2: The second string to be compared.
* Return: Positive or negative integer depending on comparison, or 0 if equal.
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}

