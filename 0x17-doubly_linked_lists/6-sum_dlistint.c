#include "lists.h"
/**
 * sum_dlistint - Sum all the data n of the list
 * @head : pointer to the head of the list
 *
 * Return: Sum of N's or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
