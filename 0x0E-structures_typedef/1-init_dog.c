#include "main.h"
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct to be initialized
 * @name: pointer to dog name
 * @age: age of the dog
 * @owner: pointer to owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
