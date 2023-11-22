#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head : pointer to pointer to te list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *tmp = NULL;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = ptr;
	}
	*head = tmp;
	return (*head);
}
