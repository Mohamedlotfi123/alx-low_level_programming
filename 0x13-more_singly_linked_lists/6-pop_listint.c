#include "lists.h"
/**
 * pop_listint - delete the head node and return it's value
 * @head : pointer to pointer to the list
 *
 * Return: 0 if link list is empty
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *ptr;

	if (*head == NULL)
	{
		return (0);
	}
	ptr = *head;
	ptr = ptr->next;
	x = (int)(*head)->n;
	free(*head);
	*head = ptr;
	return (x);
}
