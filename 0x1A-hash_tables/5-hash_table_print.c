#include "hash_tables.h"
/**
 * hash_table_print - function prints the hash table
 * @ht : the hash table
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *ptr;
	int y = 0;

	if (ht != NULL)
	{
		printf("{");
		for (x = 0; x < ht->size; x++)
		{
			if (ht->array[x])
			{
				if (y == 1)
				{
					printf(", ");
				}
				ptr = ht->array[x];
				while (ptr != NULL)
				{
					printf("'%s': '%s'", (ht->array[x])->key, (ht->array[x])->value);
					ptr = ptr->next;
					if (ptr != NULL)
					{
						printf(", ");
					}
				}
				y = 1;
			}
		}
		printf("}\n");
	}
}
