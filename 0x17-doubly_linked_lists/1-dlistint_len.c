#include "lists.h"
/**
 * dlistint_len - count number of elements in a linked
 * @h : head of the list
 *
 * Return: Number of the element
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	dlistint_t *ptr;

	ptr = (dlistint_t *)h;
	while (ptr != NULL)
	{
		count += 1;
		ptr = ptr->next;
	}
	return (count);
}
