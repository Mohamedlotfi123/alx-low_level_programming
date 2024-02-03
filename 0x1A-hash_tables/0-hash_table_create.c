#include "hash_tables.h"
/**
 * hash_table_create - function that create a hash table
 * @size : the size of the table
 *
 * Return: pointer to the list or NULL if fail
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	int i;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
	{
		return (NULL);
	}
	hash->size = size;
	hash->array = calloc(hash->size, sizeof(hash_node_t *));
	if (hash->array == NULL)
	{
		return (NULL);
	}
	for (i = 0, i < hash->size, i++)
	{
		hash->array[i] = NULL;
	}
	return (hash);
}
