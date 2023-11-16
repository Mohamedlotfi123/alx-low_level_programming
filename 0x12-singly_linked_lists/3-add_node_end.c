#include "lists.h"
#include <string.h>
/**
 * _strlen - Count length of the string
 * @str : string pointer
 *
 * Return: length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	if (str == NULL)
	{
		return (0);
	}
	while (str[i])
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - adds a new node at the end of a list
 * @head : Pointer to the first node
 * @str : Value of the node
 *
 * Return: Address of the new element or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;

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
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = malloc(sizeof(list_t));
		(ptr->next)->str = strdup(str);
		(ptr->next)->len = _strlen(str);
		(ptr->next)->next = NULL;
	}
	return (*head);
}
