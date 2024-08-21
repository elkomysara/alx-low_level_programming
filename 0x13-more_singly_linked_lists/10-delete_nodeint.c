#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - Deletes the node at index `index` of a listint_t list.
* @head: Double pointer to the head of the list.
* @index: Index of the node that should be deleted. Index starts at 0.
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head, *next_node;
unsigned int i;

if (!head || !*head)
return (-1);

if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}

for (i = 0; temp && i < index - 1; i++)
temp = temp->next;

if (!temp || !(temp->next))
return (-1);

next_node = temp->next->next;
free(temp->next);
temp->next = next_node;

return (1);
}
