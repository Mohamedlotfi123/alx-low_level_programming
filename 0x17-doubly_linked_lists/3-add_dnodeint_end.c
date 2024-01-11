#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end of the list
 * @head : pointer to the head of the list
 * @n : value of the new node
 *
 * Return: the address of the new element or NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *new;

	ptr = *head;
	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
		{
			return (NULL);
		}
		(*head)->n = n;
		(*head)->next = NULL;
		(*head)->prev = NULL;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->next = NULL;
		new->prev = ptr;
		ptr->next = new;
	}
	return (new);
}
