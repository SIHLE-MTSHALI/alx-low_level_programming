#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - prints a listint_t linked list, even if it has a loop
* @head: pointer to the head of the list
* Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *temp = head;
size_t count = 0;
if (head == NULL)
{
exit(98);
}
while (temp)
{
printf("[%p] %d\n", (void *)temp, temp->n);
count++;
if (temp->next >= temp)
{
printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
break;
}
temp = temp->next;
}
return (count);
}

