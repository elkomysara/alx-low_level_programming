
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - Creates a new dog.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner of the dog.
*
* Return: A pointer to the new dog (dog_t*), or NULL if the function fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *new_name, *new_owner;

if (name == NULL || owner == NULL)
return (NULL);

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_name = malloc(strlen(name) + 1);
if (new_name == NULL)
{
free(new_dog);
return (NULL);
}
strcpy(new_name, name);

new_owner = malloc(strlen(owner) + 1);
if (new_owner == NULL)
{
free(new_name);
free(new_dog);
return (NULL);
}
strcpy(new_owner, owner);

new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;

return (new_dog);
}
