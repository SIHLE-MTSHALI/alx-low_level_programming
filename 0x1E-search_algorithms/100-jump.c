#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0, i;

	if (array == NULL)
		return (-1);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		prev - step, prev < size ? prev : size - 1);

	for (i = prev - step; i < size && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (i < size && array[i] == value)
		return (i);

	return (-1);
}
