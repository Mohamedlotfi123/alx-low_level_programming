#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print all element of the list
 * @h : pointer to the header of the link
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *ptr = malloc(sizeof(listint_t));

	if (h == NULL)
	{
		return (0);
	}
	ptr = (listint_t *)h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
