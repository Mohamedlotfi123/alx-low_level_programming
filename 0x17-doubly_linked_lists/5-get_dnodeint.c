#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of a linked list.
 * @head : head of the linked list.
 * @index : index of the node.
 *
 * Return: the nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (i < index)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		i++;
	}
	return (ptr);
}
