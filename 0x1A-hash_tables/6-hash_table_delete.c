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
	hash_node_t *x;

	for (i = 0; i < ht->size; i++)
	{
		x = ht->array[i];
		while (x->next != NULL)
		{
			free((x->next)->key);
			free((x->next)->value);
			x = x->next;
		}
		free(x->value);
		free(x->key);
		free(x);
	}
	free(ht);
}
