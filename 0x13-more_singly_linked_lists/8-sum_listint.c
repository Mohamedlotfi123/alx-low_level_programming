#include "lists.h"
/**
 * sum_listint - sum sll the data of the lidt
 * @head : list pointer
 *
 * Return: the sum of data or 0 if the list empty
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	while (ptr != NULL)
	{
		sum += (int)ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
