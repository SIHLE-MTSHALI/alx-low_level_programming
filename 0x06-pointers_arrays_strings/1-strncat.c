#include "main.h"
/**
*_strncat - Concatenates two strings
*@dest: The destination string
*@src: The source string
*@n: Maximum number of characters to be appended
*Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
/*Find the end of the dest string*/
for (i = 0; dest[i] != '\0'; i++)
;
/*Append the src string to the dest string*/
for (j = 0; src[j] != '\0' && j < n; j++)
dest[i + j] = src[j];
/*If length of src<n, append null char to dest*/
if (j < n)
dest[i + j] = '\0';
return (dest);
}

