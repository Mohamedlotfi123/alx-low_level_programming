#include "lists.h"
/**
 * add_nodeint - add at the beginning of the list
 * @head : list pointer to pointer to the list
 * @n : value of the list
 *
 * Return: Address of the new element or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

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
		ptr = malloc(sizeof(listint_t));
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
