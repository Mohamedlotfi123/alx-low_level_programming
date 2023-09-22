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
	list_t *new, *tmp;
	unsigned x = 0, count = 0;

	new = *head;
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	while (str[x] != '\0')
	{
		count++;
		x++;
	}
	tmp->str = strdup((char *)str);
	tmp->len = count;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	while (new->next != NULL)
	{
		new = new->next;
	}
	new->next = tmp;
	return (tmp);
}
