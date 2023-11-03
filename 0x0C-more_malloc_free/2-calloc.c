#include "main.h"
/**
 * cust_memset - set allocated memory to spacific value
 * @ptr : pointer to the memory to be fill
 * @v : value to set
 * @n : Number of bits
 *
 * Return: Void
 */
void cust_memset(void *ptr, int v, unsigned int n)
{
	unsigned int x = 0;
	unsigned char *_ptr;

	_ptr = (unsigned char *)ptr;
	for (; x < n; x++)
	{
		*_ptr = v;
		_ptr++;
	}
}
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb : number of the elements
 * @size : size of one element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int x = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	x = nmemb * size;
	ptr = malloc(x);
	if (ptr == NULL)
	{
		return (NULL);
	}
	cust_memset(ptr, 0, x);
	return (ptr);
}
