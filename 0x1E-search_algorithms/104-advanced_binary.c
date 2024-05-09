#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_binary_recursive(array, value, 0, size - 1));
}

/**
 * advanced_binary_recursive - Recursive helper for advanced_binary
 * @array: Pointer to the first element of the array
 * @value: Value to search for
 * @left: Left boundary of the subarray
 * @right: Right boundary of the subarray
 *
 * Return: Index where value is located or -1 if not found
 */
int advanced_binary_recursive(int *array, int value, size_t left, size_t right)
{
	size_t mid;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (mid = left; mid < right; mid++)
		printf("%d, ", array[mid]);
	printf("%d\n", array[mid]);

	mid = (left + right) / 2;

	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);
	else if (array[mid] >= value)
		return (advanced_binary_recursive(array, value, left, mid));
	else
		return (advanced_binary_recursive(array, value, mid + 1, right));
}
