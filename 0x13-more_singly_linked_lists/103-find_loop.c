#include "lists.h"

/**
* find_listint_loop - Finds the loop in a linked list.
* @head: A pointer to the head of the linked list.
*
* Return: The address of the node where the loop starts, or NULL if no loop.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *turtle, *hare;

turtle = head;
hare = head;

while (turtle && hare && hare->next)
{
turtle = turtle->next;
hare = hare->next->next;

if (turtle == hare)
{
turtle = head;
while (turtle != hare)
{
turtle = turtle->next;
hare = hare->next;
}
return (turtle);
}
}

return (NULL);
}

