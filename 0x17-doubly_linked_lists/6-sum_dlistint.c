#include "lists.h"
/**
 * sum_dlistint - calculate the sum of all data of a linked list.
 * @head : head of the list.
 *
 * Return: the summation or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
