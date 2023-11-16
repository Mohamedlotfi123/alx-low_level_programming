#include "lists.h"
/**
 * free_list - frees the list
 * @head : list pointer
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *ptr, *tmp;

	if (head == NULL)
	{
		exit(0);
	}
	ptr = head;
	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = tmp;
	}
	free(tmp);
}
