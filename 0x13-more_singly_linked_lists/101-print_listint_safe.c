#include "lists.h"
#include <stdio.h>

/**
* print_listint_safe - prints a listint_t list safely.
* @head: pointer to the head node of the list.
* Return: the number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head, *fast = head;
size_t nodes = 0;

if (!head)
exit(98);

while (slow && fast && fast->next)
{
printf("[%p] %d\n", (void *)slow, slow->n);
nodes++;
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
exit(98);
}
}
return (nodes);
}

