#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht : hash table.
 *
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *ptr;
	unsigned long int i = 0;

	if (ht != NULL || ht->array == NULL)
	{
		while (i < ht->size)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				tmp = ptr->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
				ptr = tmp;
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
