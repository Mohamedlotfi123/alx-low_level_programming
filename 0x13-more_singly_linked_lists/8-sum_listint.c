#include "lists.h"
/**
 * sum_listint - sum all of the data n in link list
 * @head : pointer to the head of the list
 *
 * Return: the sum of all Ns
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
		sum = sum + (ptr->n);
		ptr = ptr->next;
	}
	return (sum);
}
