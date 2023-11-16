#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list
 * @h : pointer to the list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *ptr;

	ptr = (list_t *)h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		count += 1;
		ptr = ptr->next;
	}
	return (count);
}
