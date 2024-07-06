#include "dog.h"
#include <stddef.h>

/**
* init_dog - Initializes a variable of type struct dog.
* @d: A pointer to the struct dog to initialize.
* @name: The name to set.
* @age: The age to set.
* @owner: The owner to set.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
