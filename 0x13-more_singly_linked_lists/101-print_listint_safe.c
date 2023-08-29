#include "lists.h"
#include <stdio.h>

/**
* print_listint_safe - Prints a listint_t list safely.
* @head: The listint_t list to be printed.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head, *fast = head, *tmp;
size_t count = 0;

while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
slow = head;
while (slow != fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
fast = fast->next;
}
printf("-> [%p] %d\n", (void *)slow, slow->n);
return (count + 1);
}
}

if (head)
{
for (tmp = head; tmp; tmp = tmp->next)
{
printf("[%p] %d\n", (void *)tmp, tmp->n);
count++;
}
}

return (count);
}

