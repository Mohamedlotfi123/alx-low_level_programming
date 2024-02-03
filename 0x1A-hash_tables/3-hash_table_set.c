#include "hash_tables.h"
/**
 * hash_table_set - function adds an element to the hash table
 * @ht : Hash table you want to update or add the key/value
 * @key : key of the value
 * @value : value of the key
 *
 * Return: 1 if succeed, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long x;
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);
	if (node->key == NULL || node->value == NULL)
	{
		return (1);
	}
	if (node == NULL)
	{
		return (1);
	}
	x = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[x])
	{
		strcpy(node->key, key);
		strcpy(node->value, value);
		node->next = NULL;
		ht->array[x] = node;
	}
	else
	{
		if (strcmp(key, ht->array[x]->key) == 0)
		{
			ht->array[x]->key = (char *)key;
			ht->array[x]->value = (char *)value;
			free(node);
		}
		else
		{
			strcpy(node->key, key);
			strcpy(node->value, value);
			node->next = ht->array[x];
			ht->array[x] = node;
		}
	}
	return (0);
}
