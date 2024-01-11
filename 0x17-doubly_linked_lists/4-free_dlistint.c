#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head : pointer to the head of the list
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr1, *ptr2;

	if (head == NULL)
	{
		exit(0);
	}
	ptr1 = head;
	while (ptr1 != NULL)
	{
		ptr2 = ptr1->next;
		free(ptr1);
		ptr1 = ptr2;
	}
}
