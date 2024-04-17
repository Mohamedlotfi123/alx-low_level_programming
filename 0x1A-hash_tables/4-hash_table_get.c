#include "hash_tables.h"
/**
 * hash_table_get - function retrieves a value
 * @ht : hash table to retrieve from
 * @key : key of the value to retrieve
 *
 * Return: the value with the key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	if (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		while (ptr)
		{
			if (strcmp(ptr->key, key) == 0)
				return (ptr->value);
			ptr = ptr->next;
		}
	}
	return (NULL);
}
