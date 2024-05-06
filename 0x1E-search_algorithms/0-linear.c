#include "search_algos.h"

/**
 * linear_search - searches for a value in an int list.
 * @array: array to be searched.
 * @size: number of elemnts in the array.
 * @value: value to be searched.
 *
 * Return: first index where value is located or -1
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array && size)
	{
		for (i = 0; i < (int)size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
