#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - number of element of link list
 * @h : pointer to the head of the list
 *
 * Return: Number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *ptr = malloc(sizeof(listint_t));

	if (h == NULL)
	{
		return (0);
	}
	ptr = (listint_t *) h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
