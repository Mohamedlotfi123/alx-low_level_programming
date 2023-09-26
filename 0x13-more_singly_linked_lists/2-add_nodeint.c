#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds new nodeat the beginning
 * @head : pointer to head of the link
 * @n : element to be added
 *
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = *head;
	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		tmp->next = *head;
		*head = tmp;
	}
	return (*head);
}
