#include "lists.h"
/**
 * add_nodeint_end - adds nofe at he end of the list
 * @head : pointer to pointer to the list
 * @n : value of the node
 *
 * Return: address o the new element of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
		{
			return (NULL);
		}
		(*head)->n = n;
		(*head)->next = NULL;
	}
	else
	{
		ptr = *head;
		tmp = malloc(sizeof(listint_t));
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp->n = n;
		tmp->next = NULL;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = tmp;
	}
	return (*head);
}
