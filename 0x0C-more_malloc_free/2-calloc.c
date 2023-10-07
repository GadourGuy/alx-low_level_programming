#include "main.h"

/**
 * _calloc -  allocates memory for an array.
 * @nmemb: number of elemnts.
 * @size: size of bites.
 *
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
