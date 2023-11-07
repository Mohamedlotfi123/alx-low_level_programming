#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure with three variables
 * @name : name of the dog
 * @age : It's age
 * @owner : It's owner
 *
 * Description: Struct for the dog Id
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
