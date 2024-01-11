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
	unsigned int i;
	dlistint_t *ptr, *new;

	if (*h == NULL)
	{
		return (NULL);
	}
	ptr = *h;
	for (i = 0; i < idx - 1; i++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = ptr->next;
	new->prev = ptr;
	(ptr->next)->prev = new;
	ptr->next = new;
	return (new);
}
