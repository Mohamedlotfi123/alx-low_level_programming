#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to the head of the list
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = next;
	}
	*head = ptr;
	return (*head);
}
