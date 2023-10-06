#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: number of bites allocated
 *
 * Return: void function
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == 0)
		exit(98);
	return (mem);
}
