#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht : hash table
 *
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, count = 0;
	hash_node_t **ptr, *tmp;

	printf("{");
	if (ht != NULL)
	{
		ptr = ht->array;
		while (i < ht->size)
		{
			if (ptr[i] != NULL)
			{
				if (count != 0)
					printf(", ");
				printf("%s: %s", ptr[i]->key, ptr[i]->value);
				count += 1;
				if (ptr[i]->next != NULL)
				{
					tmp = ptr[i]->next;
					while (tmp)
					{
						printf("%s: %s", tmp->key, tmp->value);
						tmp = tmp->next;
					}
				}
			}
			i++;
		}
	}
	printf("}\n");
}
