#include "lists.h"
#include <stdlib.h>

/**
* free_listint_safe - Frees a listint_t list safely (handles loops)
* @h: Pointer to the pointer to the head of the list
*
* Return: The size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *temp;
size_t count = 0;

if (!h || !*h)
return (0);

current = *h;

while (current)
{
count++;
if (current <= current->next)
{
*h = NULL;
break;
}
temp = current;
current = current->next;
free(temp);
}

*h = NULL;
return (count);
}
