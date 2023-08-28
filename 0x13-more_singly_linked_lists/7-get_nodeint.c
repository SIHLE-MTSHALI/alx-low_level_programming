#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t list.
* @head: Pointer to the head of the list.
* @index: Index of the node to be returned.
*
* Return: Pointer to the node at index 'index', or NULL if it does not exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index; i++)
{
if (head == NULL)
return (NULL);
head = head->next;
}

return (head);
}

