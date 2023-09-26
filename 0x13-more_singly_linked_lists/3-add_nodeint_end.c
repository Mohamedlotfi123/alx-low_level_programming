#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds new node at the end
 * @head : pointer to the list
 * @n : element to be added
 *
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	if ((*head) == NULL)
	{
		*head = tmp;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = tmp;
	}
	return (*head);
}
