#include "lists.h"
/**
 * listint_len - count length of the list
 * @h : list pointer
 *
 * Return: Nuber of nodes
 */
size_t listint_len(const listint_t *h)
{
	listint_t *ptr;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	ptr = (listint_t *)h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
