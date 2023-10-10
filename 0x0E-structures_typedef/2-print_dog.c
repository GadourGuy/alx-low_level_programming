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
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}

}
