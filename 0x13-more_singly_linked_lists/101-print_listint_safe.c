#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t list, safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list. Exits with 98 if failed.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *fast = head, *slow = head;
size_t count = 0;

if (head == NULL)
return (0);

while (fast && fast->next && slow)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
fast = fast->next->next;
slow = slow->next;

if (fast == slow)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
exit(98);
}
}

return (count);
}

