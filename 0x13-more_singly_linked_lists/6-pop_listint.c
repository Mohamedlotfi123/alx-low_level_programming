#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node and return it's value
 * @head : pointer the head of the list
 *
 * @Return: head node value
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int x;

	if (*head == NULL)
	{
		return (0);
	}
	x = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (x);
}
