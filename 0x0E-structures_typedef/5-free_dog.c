#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dog
 * @d : Pointer to the dog struct
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	free(d);
}
