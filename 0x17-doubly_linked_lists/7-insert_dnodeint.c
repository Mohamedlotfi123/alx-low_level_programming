#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h : pointer to the head of a list
 * @idx : index to insert in
 * @n : value of inserted node
 *
 * Return: Address of the new node or NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i, x = 0;
	dlistint_t *ptr, *new;

	if (*h == NULL)
	{
		return (NULL);
	}
	ptr = *h;
	while (ptr != NULL)
	{
		x += 1;
		ptr = ptr->next;
	}
	ptr = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->n = n;
		new->next = ptr;
		new->prev = NULL;
		ptr->prev = new;
		*h = new;
		return (new);
	}
	if (x == idx)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		new->n = n;
		new->next = NULL;
		new->prev = ptr;
		ptr->next = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
	new->n = n;
	new->next = ptr->next;
	new->prev = ptr;
	(ptr->next)->prev = new;
	ptr->next = new;
	return (new);
}
