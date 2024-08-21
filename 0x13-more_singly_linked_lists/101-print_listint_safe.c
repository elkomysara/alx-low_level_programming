#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - Prints a listint_t linked list safely (handles loops)
* @head: Pointer to the head of the list
*
* Return: The number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
const listint_t *checker;
size_t count = 0;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;
checker = head;

while (checker != current)
{
if (checker == current->next)
{
printf("-> [%p] %d\n", (void *)current->next, current->next->n);
return (count);
}
checker = checker->next;
}
current = current->next;
}

return (count);
}
