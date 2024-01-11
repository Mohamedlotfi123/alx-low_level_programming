#include "lists.h"
/**
 * get_dnodeint_at_index - get the Nth node of the list
 * @head : pointer to the head of the list
 * @index : index of the node to get
 *
 * Return: pointer to the node or NULL if fail
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = head;
	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
	return (ptr);
}
