#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize variable of type struct dog
 * @d : pointer to the struct
 * @name : pointer to string
 * @age : variable of type float
 * @owner : pointer to string
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
