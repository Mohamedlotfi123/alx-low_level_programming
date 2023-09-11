#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type of data
 * @name : pointer to char
 * @age : float
 * @owner : pointer to char
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
