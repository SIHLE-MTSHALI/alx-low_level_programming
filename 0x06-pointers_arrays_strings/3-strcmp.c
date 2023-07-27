#include "main.h"
/**
*_strcmp - Compares two strings
*@s1: First string to compare
*@s2: Second string to compare
*Return: Positive integer if s1 > s2; 0 if s1 is equal to s2;
*negative integer if s1 < s2
*/
int _strcmp(char *s1, char *s2)
{
int diff;
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
diff = (*(unsigned char *)s1 - *(unsigned char *)s2);
return (diff);
}

