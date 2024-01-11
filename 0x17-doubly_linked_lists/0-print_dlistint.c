#include "lists.h"
/**
 * print_dlistint - prints all the element of the list
 * @h : pointer to the list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *ptr;
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	ptr = (dlistint_t *)h;
	while (ptr != NULL)
	{
		count += 1;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
