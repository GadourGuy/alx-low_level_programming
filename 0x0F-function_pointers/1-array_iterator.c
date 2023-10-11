#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on an array.
 * @array: given array.
 * @size: size of array.
 * @action: pointer function to be called.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size > 0)
	{
		if (action)
		{
			for (i = 0; i < size; i++)
			{
				action(array[i]);
			}
		}
	}
}
