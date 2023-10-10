#include "main.h"
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct to be printed
 */

void print_dog(struct dog *d)
{
	char *name = d->name, *owner = d->owner;
	float age = d->age;

	if (d == NULL)
	{
		printf("\n");
	}
	if (name == NULL)
		printf("name: (nil)\n");
	else
		printf("name: %s\n", d->name);
	if (!(age))
		printf("age: (nil)\n");
	else
		printf("age: %f\n", d->age);
	if (owner == NULL)
		printf("owner: (nil)\n");
	else
		printf("owner: %s\n", d->owner);

}
