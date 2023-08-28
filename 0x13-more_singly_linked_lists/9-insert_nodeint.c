#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position.
* @head: Double pointer to the head of the list.
* @idx: The index of the list where the new node should be added, starts at 0.
* @n: The integer to be included in the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp = *head;
unsigned int i = 0;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

while (temp)
{
if (i + 1 == idx)
{
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
temp = temp->next;
i++;
}

free(new_node);
return (NULL);
}

