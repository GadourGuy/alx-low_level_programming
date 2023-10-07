#include "main.h"

/**
 * setmemory - sets memory for n bytes
 * @arr: array to be filled
 * @c: character used in memory
 * @n: number of bytes filled
 */

char *setmemory(char *arr, char b, int n)
{
	while (n--)
	{
		*arr++ = b;
	}
	return (arr);
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
	array = malloc(sizeof(int) * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	setmemory(array, 0, sizeof(int) * nmemb); 
	return (array);
}
