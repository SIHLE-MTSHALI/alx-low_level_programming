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

	while (array[fmin(step, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, fmin(step, size));

	for (i = prev; i < fmin(step, size); i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
