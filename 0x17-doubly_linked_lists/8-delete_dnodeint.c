#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node at the index
 * @head : pointer to the head of a list
 * @index : index of node to be deleted
 *
 * Return: 1 if success or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1, *ptr2;
	unsigned int i;

	if (*head == NULL)
	{
		free(*head);
		return (1);
	}
	ptr1 = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(ptr1);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		ptr1 = ptr1->next;
		if (ptr1 == NULL)
		{
			return (-1);
		}
	}
	ptr2 = ptr1->prev;
	(ptr1->next)->prev = ptr2;
	ptr2->next = ptr1->next;
	free(ptr1);
	return (1);
}
