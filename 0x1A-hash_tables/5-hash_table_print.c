#include "hash_tables.h"

/**
* hash_table_print - Prints a hash table.
* @ht: The hash table to print.
* 
* Description: Prints the key/value pairs in the order they appear in
* the array, following the format {'key': 'value'}.
*/
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;
int first = 1; /* flag to ensure proper comma placement */

if (ht == NULL)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
if (first == 0)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
first = 0;
node = node->next;
}
}
printf("}\n");
}
