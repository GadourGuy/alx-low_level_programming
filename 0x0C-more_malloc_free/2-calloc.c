#include "main.h"

/**
 * setmemory - sets memory for n bytes
 * @arr: array to be filled
 * @c: character used in memory
 * @n: number of bytes filled
 *
 * Return: pointer to set memory
 */

char *setmemory(char *arr, char c, int n)
{
	char *ptr = arr;

	while (n--)
	{
		*ptr++ = c;
	}
	return (ptr);
}
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
	array = malloc(size * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	setmemory(array, 0, sizeof(int) * nmemb);
	return (array);
}
