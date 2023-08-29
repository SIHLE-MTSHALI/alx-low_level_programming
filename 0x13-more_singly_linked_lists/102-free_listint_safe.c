#include "lists.h"

/**
* free_listint_safe - Frees a listint_t list safely.
* @h: A pointer to the address of the head of the list.
*
* Return: The size of the list that was free’d.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *tmp;
size_t count = 0;

if (!h || *h == NULL)
return (0);

while (*h)
{
tmp = *h;
count++;
if (tmp <= tmp->next)
{
free(tmp);
*h = NULL;
return (count);
}
*h = tmp->next;
free(tmp);
}

*h = NULL;
return (count);
}

