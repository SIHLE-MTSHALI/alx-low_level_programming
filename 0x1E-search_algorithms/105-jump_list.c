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
	size_t step = sqrt(size);
	listint_t *prev = list, *curr = list;

	if (list == NULL || size == 0)
		return (NULL);

	while (curr && curr->n < value)
	{
		prev = curr;
		for (size_t i = 0; i < step && curr; i++)
			curr = curr->next;
	}

	printf("Value checked at index [%ld] = [%d]\n",
	       prev->index, prev->n);
	printf("Value found between indexes [%ld] and [%ld]\n",
	       prev->index, curr ? curr->index : size - 1);

	while (prev && prev->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		       prev->index, prev->n);
		prev = prev->next;
	}

	if (prev && prev->n == value)
		return (prev);

	return (NULL);
}
