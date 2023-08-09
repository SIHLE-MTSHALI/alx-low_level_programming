#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars and initializes it with a char
* @size: size of the array
* @c: character to initialize the array with
*
* Return: pointer to the array or NULL if it fails or size is 0
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

if (size == 0)
return (NULL);

arr = malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;

return (arr);
}

