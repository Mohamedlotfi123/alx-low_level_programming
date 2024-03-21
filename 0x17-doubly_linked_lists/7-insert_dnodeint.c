#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h : pointer of pointer to the head of the list.
 * @idx : index to insert in.
 * @n : the value of the node.
 *
 * Return: Address of the new node or NULL if fail.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new;
	unsigned int i = 0;

	if (*h == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL && idx == 0)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
	}
	else
	{
		ptr = *h;
		while (i < idx - 1)
		{
			ptr = ptr->next;
			if (ptr == NULL)
				return (NULL);
			i++;
		}
		if (ptr->next == NULL)
		{
			new->prev = ptr;
			new->next = NULL;
			ptr->next = new;
		}
		else
		{
			new->prev = ptr;
			new->next = ptr->next;
			(ptr->next)->prev = new;
			ptr->next = new;
		}
	}
	return (new);
}
