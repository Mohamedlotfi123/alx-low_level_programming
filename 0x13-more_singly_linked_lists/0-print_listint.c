#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a list
 * @h : list pointer
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *ptr;

	ptr = (listint_t *)h;
	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
