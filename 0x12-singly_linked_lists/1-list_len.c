#include "lists.h"
/**
 * list_len - count the element of the list_t list
 * @h : pointer to the first element of list_t
 *
 * Return: Number of the element
 */
size_t list_len(const list_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return ((unsigned long)count);
}
