#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table.
* @size: Size of the array.
*
* Return: A pointer to the newly created hash table or NULL if it fails.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
unsigned long int i;

table = malloc(sizeof(hash_table_t));
if (table == NULL)
return (NULL);

table->size = size;
table->array = malloc(sizeof(hash_node_t *) * size);
if (table->array == NULL)
{
free(table);
return (NULL);
}

for (i = 0; i < size; i++)
table->array[i] = NULL;

return (table);
}
