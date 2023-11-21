#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at given index
 * @head : pointer to pointer to the list
 * @idx : index to add the node at
 * @n : value of the node
 *
 * Return: address of the new node or NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	unsigned int count = 0;
	listint_t *ptr, *tmp;

	if (*head == NULL && idx > 0)
	{
		return (NULL);
	}
	if (*head == NULL && idx == 0)
	{
		*head = malloc(sizeof(listint_t));
		if (head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
	}
	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	if (idx > count)
	{
		return (NULL);
	}
	ptr = *head;
	while (x < idx - 1)
	{
		ptr = ptr->next;
		x++;
	}
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = ptr->next;
	ptr->next = tmp;
	return (tmp);
}
