#include "lists.h"
#include <stdio.h>

/**
* print_listint_safe - prints a listint_t linked list, even if it has a loop
* @head: pointer to the head of the list
* Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head, *fast = head, *marker = head;
size_t count = 0;

if (head == NULL)
exit(98);

/* Check for loop using Floyd's cycle-finding algorithm */
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
/* Loop detected. Let's print the loop */
do
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
}
while (slow != fast);
printf("-> [%p] %d\n", (void *)slow, slow->n);
return (count);
}
}

/* No loop detected. Print the list as usual */
while (marker != NULL)
{
printf("[%p] %d\n", (void *)marker, marker->n);
count++;
marker = marker->next;
}
return (count);
}

