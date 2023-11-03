#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr : pointer to the memory previously allocated
 * @old_size : is the size, in bytes, of the allocated space for ptr
 * @new_size :  new size, in bytes of the new memory block
 *
 * Return: Pointer to the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int x;
	unsigned char *ptr_1 = (unsigned char *)ptr;
	unsigned char *ptr_2;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_2 = malloc(old_size);
	if (ptr_2 == NULL)
	{
		return (NULL);
	}
	while (ptr_1[x])
	{
		ptr_2[x] = ptr_1[x];
		x++;
	}
	free(ptr);
	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr_1 = (unsigned char *)ptr;
	x = 0;
	while (ptr_2[x])
	{
		ptr_1[x] = ptr_2[x];
		x++;
	}
	return (ptr);
}
