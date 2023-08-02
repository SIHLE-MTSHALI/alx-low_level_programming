#include "main.h"
/**
*_strpbrk - Searches a string for any of a set of bytes
*@s: The string to be searched
*@accept: The set of bytes to be matched
*
*Return: A pointer to the byte in s
*/
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *sub = accept;
while (*sub)
{
if (*s == *sub)
return (s);
sub++;
}
s++;
}
return (0);
}
