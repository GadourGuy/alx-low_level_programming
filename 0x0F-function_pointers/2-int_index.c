#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to be searched.
 * @size: size of array
 * @cmp: function to be used for searching.
 *
 * Return: index of found number.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (array)
			{
				cmp(array[i]);
				if (cmp(array[i]))
					return (i);
			}
		}
	}	
	return (-1);
}
