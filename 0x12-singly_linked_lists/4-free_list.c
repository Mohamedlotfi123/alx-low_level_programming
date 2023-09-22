#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free list_t list
 * @head : pointer to list_t
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
