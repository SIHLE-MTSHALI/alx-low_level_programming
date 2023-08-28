#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t list.
* @head: Double pointer to the head of the list.
*
* Return: The head node's data (n). If the list is empty, return 0.
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (*head == NULL)
return (0);

temp = *head;
n = temp->n;
*head = temp->next;
free(temp);

return (n);
}

