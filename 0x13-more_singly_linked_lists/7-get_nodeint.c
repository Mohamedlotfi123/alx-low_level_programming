#include "lists.h"
/**
 * get_nodeint_at_index - returnd the nth nodeof a list
 * @head : list pointer
 * @index : index of the nth node
 *
 * Return: nth node or NULL if don't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int x = 0, count = 0;

	ptr = head;
	while (ptr != NULL)
	{
		count += 1;
		ptr = ptr->next;
	}
	if (index > count - 1)
	{
		return (0);
	}
	ptr = head;
	while (x < index)
	{
		ptr = ptr->next;
		x++;
	}
	return (ptr);
}
