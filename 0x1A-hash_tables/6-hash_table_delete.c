#include "hash_tables.h"
/**
 * hash_table_delete - function deletes a hash table
 * @ht : the Hash table
 *
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *x, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			x = ht->array[i];
			while (x != NULL)
			{
				free(x->key);
				free(x->value);
				tmp = x->next;
				free(x);
				x = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
