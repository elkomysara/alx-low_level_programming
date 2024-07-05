#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _realloc - Reallocates a memory block using malloc and free.
* @ptr: A pointer to the memory previously allocated with a call to malloc.
* @old_size: The size, in bytes, of the allocated space for ptr.
* @new_size: The new size, in bytes of the new memory block.
*
* Return: A pointer to the newly allocated memory.
*         If new_size == old_size, returns ptr.
*         If new_size == 0 and ptr is not NULL, returns NULL.
*         If malloc fails, returns NULL.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

/* If new_size is equal to old_size, do nothing and return ptr */
if (new_size == old_size)
return (ptr);

/* If new_size is zero and ptr is not NULL, free ptr and return NULL */
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

/* If ptr is NULL, allocate new memory of size new_size */
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}

/* Allocate new memory block */
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

/* Copy the contents from the old memory block to the new one */
if (new_size < old_size)
memcpy(new_ptr, ptr, new_size);
else
memcpy(new_ptr, ptr, old_size);

/* Free the old memory block */
free(ptr);

return (new_ptr);
}
