#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name : pointer to srting
 * @age : variable type float
 * @owner : pointer to string
 *
 * Return: pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t news;
	dog_t *x = &news;

	if (x == NULL)
	{
		return (NULL);
	}
	x->name = name;
	x->age = age;
	x->owner = owner;
	return (x);
}
