#include <stdlib.h>
#include <string.h>

/**
* _calloc - Allocates memory for an array, using malloc.
* @nmemb: The number of elements in the array.
* @size: The size of each element in bytes.
*
* Return: A pointer to the allocated memory.
*         If nmemb or size is 0, returns NULL.
*         If malloc fails, returns NULL.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size;

/* If nmemb or size is 0, return NULL */
if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;

/* Allocate memory */
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);

/* Set allocated memory to zero */
memset(ptr, 0, total_size);

return (ptr);
}
