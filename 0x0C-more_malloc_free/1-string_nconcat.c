#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of bytes from s2 to concatenate to s1.
*
* Return: If the function fails - NULL.
*         Otherwise - a pointer to the concatenated space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len = 0, index = 0, concat_i = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[len])
len++;

concat = malloc(sizeof(char) * (len + n + 1));

if (concat == NULL)
return (NULL);

while (s1[concat_i])
{
concat[concat_i] = s1[concat_i];
concat_i++;
}

while (index < n && s2[index])
{
concat[concat_i] = s2[index];
concat_i++, index++;
}

concat[concat_i] = '\0';

return (concat);
}

