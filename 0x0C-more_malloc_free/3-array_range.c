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
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);

}
