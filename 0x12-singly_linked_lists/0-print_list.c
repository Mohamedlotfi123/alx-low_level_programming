#include "lists.h"
#include <stdlib.h>
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
	list_t *ptr = malloc(sizeof(list_t));

	if (h == NULL)
	{
		return (0);
	}
	ptr = (list_t *)h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			n++;
			printf("[0] (nil)\n");
			ptr = ptr->next;
		}
		else
		{
			n++;
			printf("[%u] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
		}
	}
	return (n);
}
