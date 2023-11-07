#include "dog.h"
/**
 * free_dog - frees dog
 * @d : Pointer to the dog struct
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
