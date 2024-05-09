#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev = list, *curr = list;

	if (list == NULL)
		return (NULL);

	while (curr->express && curr->n < value)
	{
		prev = curr;
		curr = curr->express;
		printf("Value checked at index [%ld] = [%d]\n",
		       curr->index, curr->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	       prev->index, curr->index);

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
