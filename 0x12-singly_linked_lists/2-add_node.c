#include"lists.h"
#include <string.h>
/**
 * _strlen - count the length o the string
 * @s : string pointer
 *
 * Return: Length of the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * add_node - adds new node at the beginning
 * @head : Pointer to first element
 * @str : value of the node
 *
 * Return: address of the new elemet or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
		{
			return (NULL);
		}
		(*head)->str = strdup(str);
		(*head)->len = _strlen(str);
		(*head)->next = NULL;
	}
	else
	{
		tmp = malloc(sizeof(list_t));
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}
