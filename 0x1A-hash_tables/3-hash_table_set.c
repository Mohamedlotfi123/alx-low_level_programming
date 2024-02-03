#include "hash_tables.h"
/**
 * hash_table_set - function adds an element to the hash table
 * @ht : Hash table you want to update or add the key/value
 * @key : key of the value
 * @value : value of the key
 *
 * Return: 1 if succeed, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long x;
	hash_node_t *node;

	if (key == NULL)
	{
		return (0);
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);
	if (node->key == NULL || node->value == NULL)
		return (0);
	strcpy(node->key, key);
	strcpy(node->value, value);
	x = key_index((const unsigned char *)key, ht->size);
	if (ht->array[x] == NULL)
	{
		node->next = NULL;
		ht->array[x] = node;
	}
	else
	{
		if (x >= ht->size)
		{
			return (0);
		}
		if (strcmp((ht->array[x])->key, key) == 0)
		{
			strcpy((ht->array[x])->value, value);
			free(node->key);
			free(node->value);
			free(node);
		}
		else
		{
			node->next = ht->array[x];
			ht->array[x] = node;
			/*if ((ht->array[x])->next == NULL)
			{
				node->next = ht->array[x];
				ht->array[x] = node;
			}
			else
			{
				ptr = ht->array[x];
				node->next = ptr;
				ht->array[x] = node;
			}*/
		}
	}
	return (1);
}
