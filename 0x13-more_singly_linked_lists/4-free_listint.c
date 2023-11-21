#include "lists.h"
/**
 * free_listint - frees list
 * @head : list pointer
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
