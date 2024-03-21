#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beggnning of a list.
 * @head : pointer of pointer to the head of a list.
 * @n : value of the new node.
 *
 * Return: address of the new node or NULL if fail.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (*head);
}
