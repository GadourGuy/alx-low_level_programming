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
	printf("name: %s\n", d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner);

}
