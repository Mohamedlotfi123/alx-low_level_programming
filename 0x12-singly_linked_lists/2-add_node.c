#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add a new node at the begginning of the list_t
 * @head : pointer to pointer
 * @str : pointer to string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int x = 0, lent = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	while (str[x] != '\0')
	{
		lent++;
		x++;
	}
	new->str = strdup((char *)str);
	new->len = lent;
	new->next = *head;
	*head = new;
	return (*head);
}
