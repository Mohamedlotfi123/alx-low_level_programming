#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - return the nth node of the list
 * @head : pointer to the head of the list
 * @index : intdex of the node
 *
 * Return: Nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *ptr;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = head;
	for (x = 0; x < index; x++)
	{
		if (ptr == NULL)
		{
			continue;
		}
		ptr = ptr->next;
	}
	if (ptr != NULL)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
