#include "main.h"
/**
*_strspn - Gets the length of a prefix substring
*@s: The string to be searched
*@accept: The prefix to be matched
*
*Return: The number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (*s)
{
char *sub = accept;
while (*sub)
{
if (*s == *sub)
{
count++;
break;
}
sub++;
}
if (!*sub)
break;
s++;
}
return (count);
}

