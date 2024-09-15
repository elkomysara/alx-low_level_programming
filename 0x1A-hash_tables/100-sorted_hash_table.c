#include "hash_tables.h"

/**
* shash_table_create - Creates a sorted hash table
* @size: The size of the hash table
* Return: A pointer to the new sorted hash table, or NULL on failure
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht = malloc(sizeof(shash_table_t));
if (!ht)
return (NULL);

ht->size = size;
ht->array = calloc(size, sizeof(shash_node_t *));
if (!ht->array)
{
free(ht);
return (NULL);
}
ht->shead = NULL;
ht->stail = NULL;

return (ht);
}

/**
* shash_table_set - Adds or updates an element in the sorted hash table
* @ht: The hash table
* @key: The key
* @value: The value
* Return: 1 on success, 0 on failure
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *new, *temp;
unsigned long int idx;
char *val_copy;

if (!ht || !key || !value || *key == '\0')
return (0);

idx = key_index((const unsigned char *)key, ht->size);
val_copy = strdup(value);
if (!val_copy)
return (0);

temp = ht->shead;
while (temp)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = val_copy;
return (1);
}
temp = temp->snext;
}

new = malloc(sizeof(shash_node_t));
if (!new)
return (0);

new->key = strdup(key);
new->value = val_copy;
new->next = ht->array[idx];
ht->array[idx] = new;

/* Insert in sorted order */
if (ht->shead == NULL)
{
new->sprev = NULL;
new->snext = NULL;
ht->shead = new;
ht->stail = new;
}
else
{
temp = ht->shead;
while (temp && strcmp(temp->key, key) < 0)
temp = temp->snext;

if (temp == ht->shead)
{
new->sprev = NULL;
new->snext = ht->shead;
ht->shead->sprev = new;
ht->shead = new;
}
else if (temp == NULL)
{
new->sprev = ht->stail;
new->snext = NULL;
ht->stail->snext = new;
ht->stail = new;
}
else
{
new->sprev = temp->sprev;
new->snext = temp;
temp->sprev->snext = new;
temp->sprev = new;
}
}

return (1);
}

/**
* shash_table_get - Retrieves a value associated with a key
* @ht: The hash table
* @key: The key to look for
* Return: The value, or NULL if not found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *node;
unsigned long int idx;

if (!ht || !key || *key == '\0')
return (NULL);

idx = key_index((const unsigned char *)key, ht->size);
node = ht->array[idx];

while (node)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}

return (NULL);
}

/**
* shash_table_print - Prints a sorted hash table in ascending order
* @ht: The hash table
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *node;
int comma_flag = 0;

if (!ht)
return;

printf("{");
node = ht->shead;
while (node)
{
if (comma_flag)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
comma_flag = 1;
node = node->snext;
}
printf("}\n");
}

/**
* shash_table_print_rev - Prints a sorted hash table in reverse order
* @ht: The hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node;
int comma_flag = 0;

if (!ht)
return;

printf("{");
node = ht->stail;
while (node)
{
if (comma_flag)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
comma_flag = 1;
node = node->sprev;
}
printf("}\n");
}

/**
* shash_table_delete - Deletes a sorted hash table
* @ht: The hash table
*/
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *node, *temp;

if (!ht)
return;

node = ht->shead;
while (node)
{
temp = node->snext;
free(node->key);
free(node->value);
free(node);
node
