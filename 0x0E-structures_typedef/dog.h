#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
* struct dog - A new type describing a dog.
* @name: The name of the dog (type: char *).
* @age: The age of the dog (type: float).
* @owner: The owner of the dog (type: char *).
*/
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: A pointer to the struct dog to initialize.
 * @name: The name to set.
 * @age: The age to set.
 * @owner: The owner to set.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);


/**
 * print_dog - Prints a struct dog.
 * @d: A pointer to the struct dog to print.
 */
void print_dog(struct dog *d);

#endif /* DOG_H */

