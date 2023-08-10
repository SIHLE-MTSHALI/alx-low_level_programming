#include "main.h"
#include <stdlib.h>

/**
* array_range - Creates an array of integers.
* @min: Start of the range.
* @max: End of the range.
*
* Return: Pointer to the newly created array, NULL if failure.
*/
int *array_range(int min, int max)
{
int *array;
int i;

if (min > max)
return (NULL);

array = malloc((max - min + 1) * sizeof(int));
if (array == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
array[i] = min;

return (array);
}

