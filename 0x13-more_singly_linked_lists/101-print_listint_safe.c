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
int loop_detected = 0;

if (head == NULL)
exit(98);

/* Use Floyd's cycle-finding algorithm to detect a loop */
while (fast && fast->next && slow)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
loop_detected = 1;
break;
}
}

/* Print the list */
while (head)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
count++;

if (loop_detected)
{
fast = fast->next;
if (fast == head)
break;
}
}

return (count);
}

