#include "main.h"
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct to be printed
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
	}
	if (d->name == NULL)
		printf("name: (nil)\n");
	if (d->name != NULL)
		printf("name: %s\n", d->name);
	if (!(d->age))
		printf("age: (nil)\n");
	if (d->age)
		printf("age: %f\n", d->age);
	if (d->owner == NULL)
		printf("owner: (nil)\n");
	if (d->owner != NULL)
		printf("owner: %s\n", d->owner);

}
