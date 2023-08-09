#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of the program.
* @ac: argument count
* @av: argument vector
*
* Return: char pointer to concatenated string, NULL on failure.
*/
char *argstostr(int ac, char **av)
{
int i, j, k = 0, total_len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

/* Calculate the total length for the new concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
total_len++;
total_len++; /* For the '\n' at the end of each argument */
}

/* Allocate memory for the concatenated string */
str = malloc(total_len + 1); /* +1 for the terminating null byte */
if (str == NULL)
return (NULL);

/* Fill the string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k++] = av[i][j];
}
str[k++] = '\n';
}
str[k] = '\0';

return (str);
}

