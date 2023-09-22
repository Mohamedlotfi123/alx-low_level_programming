#include "lists.h"
#include<stddef.h>
#include <stdio.h>
/**
 * print_list - print all the element of the list_t list
 * @h : pointer to list_t
 *
 * Return: number of element
 */
size_t print_list(const list_t *h)
{
	size_t n;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			n++;
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			n++;
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (n);
}
