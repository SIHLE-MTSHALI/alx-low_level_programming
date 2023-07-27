#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
/* Find the end of the dest string */
for (i = 0; dest[i] != '\0'; i++)
;
/* Append the src string to the dest string */
for (j = 0; src[j] != '\0'; j++)
dest[i + j] = src[j];
/* Add the null-terminating character to the dest string */
dest[i + j] = '\0';
return (dest);
}

