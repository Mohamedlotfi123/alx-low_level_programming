#include "lists.h"
#include <stdlib.h>
#include<string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head : pointer to head
 * @str : pointer to string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned x = 0, count = 0;

	if (new == NULL)
	{
		return (NULL);
	}
	while (str[x] != '\0')
	{
		count++;
		x++;
	}
	new->str = strdup((char *)str);
	new->len = count;
	new->next = NULL;
	*head = new;
	return (new);
}
