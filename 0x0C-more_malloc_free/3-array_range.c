#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minmum number
 * @max: maximum number
 *
 * Return: an array of numbers
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, length;

	if (min > max)
	{
		return (NULL);
	}
	length = max - min + 1;
	arr = malloc(sizeof(int) * length);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		arr[i] = min++;
	}

	return (arr);

}
