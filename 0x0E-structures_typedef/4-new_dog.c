#include "dog.h"
/**
 * new_dog - creates new dog
 * @name : name of the dog
 * @age : age of the dog
 * @owner : owner of the dog
 *
 * Return: Pointer to the new dog or NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
