#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list safely.
* @h: A pointer to the address of the head of the list.
*
* Return: The size of the list that was free'd.
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *fast = *h, *slow = *h, *free_ptr;

/* Detect loop using Floyd's cycle-finding algorithm */
while (fast && fast->next && slow)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
/* Loop exists, so break it */
fast = *h;
while (fast != slow)
{
fast = fast->next;
slow = slow->next;
}
fast->next = NULL;
}
}

/* Free the list */
while (*h)
{
free_ptr = (*h)->next;
free(*h);
*h = free_ptr;
count++;
}

*h = NULL;
return (count);
}

