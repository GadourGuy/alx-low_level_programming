#include "main.h"
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct to be printed
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("name: %s\n", d->name ? d->name : "(nil");
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}

}
