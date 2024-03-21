#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h : head of the linked list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	dlistint_t *ptr;

	if (h == NULL)
		return (0);
	ptr = (dlistint_t *)h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count += 1;
		ptr = ptr->next;
	}
	return (count);
}
