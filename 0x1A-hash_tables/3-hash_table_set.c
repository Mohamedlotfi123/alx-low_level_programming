#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht : the hash table you want to add or update the key/value.
 * @key : the key
 * @value : the value associated with the key.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	if (key == NULL || index >= ht->size)
		return (0);
	if (ht != NULL)
	{
		if (ht->array[index] == NULL)
		{
			node->key = (char *)key;
			node->value = (char *)value;
			node->next = NULL;
			ht->array[index] = node;
		}
		else
		{
			if (strcmp(ht->array[index]->key, key) == 0)
			{
				ht->array[index]->value = (char *)value;
				free(node);
			}
			else
			{
				node->key = (char *)key;
				node->value = (char *)value;
				node->next = ht->array[index];
				ht->array[index] = node;
			}
		}
	}
	return (1);
}
