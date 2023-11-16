#include "lists.h"
/**
 * list_len - Count number of nodes in the list
 * @h : Pointer to the list
 *
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *ptr;

	ptr = (list_t *)h;
	while (ptr != NULL)
	{
		count += 1;
		ptr = ptr->next;
	}
	return (count);
}
