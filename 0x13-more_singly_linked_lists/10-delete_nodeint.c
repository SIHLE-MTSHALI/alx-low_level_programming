#include "lists.h"

/**
* delete_nodeint_at_index - Deletes a node at a specific index.
* @head: Double pointer to the head of the list.
* @index: The index of the node to be deleted, starts at 0.
* Return: 1 if succeeded, -1 if failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *current = *head, *previous;

if (!*head)
return (-1);

if (index == 0)
{
*head = current->next;
free(current);
return (1);
}

while (current)
{
if (i == index)
{
previous->next = current->next;
free(current);
return (1);
}
previous = current;
current = current->next;
i++;
}
return (-1);
}

