#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - printd link list
 * @head : list pointer
 *
 * Return: NUmber of the nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	listint_t *ptr;

	if (head == NULL)
	{
		exit(98);
	}
	ptr = (listint_t *)head;
	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		c++;
		ptr = ptr->next;
	}
	return (c);
}
