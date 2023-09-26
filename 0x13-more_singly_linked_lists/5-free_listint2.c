#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list
 * @head : pointer to the list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		ptr = NULL;
	}
	*head = NULL;
}
