
#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees a dog.
* @d: The dog to free.
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}

