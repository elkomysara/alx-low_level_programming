#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @head: Pointer to the head of the list.
* @index: The index of the node, starting from 0.
*
* Return: Pointer to the nth node, or NULL if the node does not exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head && i < index)
{
head = head->next;
i++;
}

return (head ? head : NULL);
}
