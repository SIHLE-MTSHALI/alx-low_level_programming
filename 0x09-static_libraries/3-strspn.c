#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: The string to be scanned.
* @accept: The characters to be searched for.
* Return: The number of characters in s that match characters in accept.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}

if (!accept[j])
break;
}

return (i);
}

