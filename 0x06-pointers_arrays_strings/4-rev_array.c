#include "main.h"
#include<stdio.h>
/**
 * reverse_array - reverse the content of array
 * @*a : pointer to array
 * @n : number of number of the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int x, y = 0, z;

	n--;
	x = n / 2;
	while (y < x)
	{
		z = a[n];
		a[n] = a[y];
		a[y] = z;
		y++;
		n--;
	}
}
