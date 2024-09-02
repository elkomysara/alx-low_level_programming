#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to the pointer of the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp = *head;
    unsigned int i = 0;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        *head = temp->next;
        if (temp->next)
            temp->next->prev = NULL;
        free(temp);
        return (1);
    }

    while (temp && i < index)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
        return (-1);

    if (temp->next)
        temp->next->prev = temp->prev;
    if (temp->prev)
        temp->prev->next = temp->next;

    free(temp);
    return (1);
}
