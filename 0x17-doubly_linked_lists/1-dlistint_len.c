#include "lists.h"
/**
 * dlistint_len - count the number of elements in a linked list.
 * @h : head of the linked list.
 *
 * Return: length of the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	dlistint_t *ptr;

	if (h == NULL)
		return (0);
	ptr = (dlistint_t *)h;
	while (ptr != NULL)
	{
		count += 1;
		ptr = ptr->next;
	}
	return (count);
}
