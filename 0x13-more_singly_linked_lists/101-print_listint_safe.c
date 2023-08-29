#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_listint_safe - Prints all the elements of a listint_t list safely.
* @head: Pointer to the head node of the list.
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head, *fast = head;
size_t count = 0;

while (slow && fast && fast->next)
{
if (count > 0 && slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
exit(98);
}
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
fast = fast->next->next;
}
return (count);
}

