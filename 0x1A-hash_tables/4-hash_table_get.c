#include "hash_tables.h"
/**
 * hash_table_get - function retrieves a value for hash table
 * @ht : hash table
 * @key : key of the value to retrieve
 *
 * Return: The value or NULL if fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x;

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}
	x = key_index((const unsigned char *)key, ht->size);
	if (ht->array[x] == NULL || x >= ht->size)
	{
		return (NULL);
	}
	return ((ht->array[x])->value);
}
