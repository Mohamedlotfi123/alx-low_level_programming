#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at index of a linked list.
 * @head : pointer of pointer to the head of the linked list.
 * @index : index of the node.
 *
 * Return: 1 if succeeded, -1 if fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	ptr = *head;
	while (i < index)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (-1);
		i++;
	}
	if (ptr->next == NULL && ptr->prev == NULL)
	{
		*head = NULL;
		free(ptr);
	}
	else if (ptr->prev == NULL)
	{
		tmp = ptr->next;
		tmp->prev = NULL;
		free(ptr);
		*head = tmp;
	}
	else if (ptr->next == NULL)
	{
		tmp = ptr->prev;
		tmp->next = NULL;
		free(ptr);
	}
	else
	{
		(ptr->prev)->next = ptr->next;
		(ptr->next)->prev = ptr->prev;
		free(ptr);
	}
	return (1);
}
