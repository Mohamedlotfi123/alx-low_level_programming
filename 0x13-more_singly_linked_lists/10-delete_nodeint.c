#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node at index
 * @head : pointer to pointer to the list
 * @index : index of the node should be added
 *
 * Return: 1 on success, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *tmp;
	unsigned int c = 0;

	if (*head == NULL)
		return (-1);
	ptr = *head;
	while (ptr != NULL)
	{
		c++;
		ptr = ptr->next;
	}
	if (index > c - 1)
	{
		return (-1);
	}
	ptr = *head;
	c = 0;
	if (index != 0)
	{
		while (c < index - 1)
		{
			ptr = ptr->next;
			c++;
		}
		tmp = ptr;
		ptr = ptr->next;
		tmp->next = ptr->next;
		free(ptr);
		return (1);
	}
	tmp = ptr->next;
	free(*head);
	*head = tmp;
	return (1);
}
