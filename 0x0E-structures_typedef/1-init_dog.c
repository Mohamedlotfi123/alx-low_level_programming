#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variables of type struct dog
 * @d : Pointer to the struct
 * @name : value of the name variable in the struct
 * @age : value of the age variable of the srtuct
 * @owner : value of the owner variable of the struct
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
