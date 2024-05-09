#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 * @list: Pointer to the head of the list
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *prev, *curr;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	prev = curr = list;

	while (curr->n < value && curr->next != NULL)
	{
		prev = curr;
		for (step = 0; curr->next != NULL && step < step_size; step++)
			curr = curr->next;
	}

	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
	printf("Value found between indexes [%ld] and [%ld]\n",
	       prev->index, curr->index);

	while (prev != curr)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		       prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
	if (curr->n == value)
		return (curr);

	return (NULL);
}
