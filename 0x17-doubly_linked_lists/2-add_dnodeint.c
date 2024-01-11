#include "lists.h"
/**
 * add_dnodeint - add a node at the beginning of the list
 * @head : pointer to the head of the list
 * @n : value of the node
 *
 * Return: Address of the new node or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

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
		ptr = malloc(sizeof(dlistint_t));
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr->n = n;
		ptr->next = *head;
		ptr->prev = NULL;
		(*head)->prev = ptr;
		*head = ptr;
	}
	return (*head);
}
