#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: size of memory to allocate
* Return: pointer to the allocated memory
*         if malloc fails, process terminates with a status of 98
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}

