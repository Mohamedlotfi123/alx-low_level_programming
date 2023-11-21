#include "lists"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a list
 * @h : list pointer
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;
	listint_t ptr;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
	}
	return (count);
}
