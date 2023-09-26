#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at the index
 * @head : pointer to the head of the list
 * @idx : where the node will be added
 * @n : data of the node
 *
 * Return: address of the new nodeor NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *tmp = malloc(sizeof(listint_t));
	unsigned int x;

	if (*head == NULL)
	{
		return (NULL);
	}
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	ptr = *head;
	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	for (x = 1; x < idx; x++)
	{
		if (ptr == NULL)
		{
			continue;
		}
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		tmp->next = ptr->next;
		ptr->next = tmp;
	}
	return (*head);
}
