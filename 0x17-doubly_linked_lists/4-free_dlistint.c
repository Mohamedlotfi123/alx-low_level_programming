#include "lists.h"
/**
 * free_dlistint - frees a linked list.
 * @head : head of the linked list.
 *
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp, *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr->next);
		free(ptr->prev);
		free(ptr);
		ptr = tmp;
	}
}
