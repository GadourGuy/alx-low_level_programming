#include "search_algos.h"
#include <math.h>

/**
 * print_array - prints an array
 * @array: array to be printed
 * @begin: begin of array
 * @end: end of an array
 *
 * Return: Void function.
*/
void print_array(int *array, int begin, int end)
{
	int i;

	for (i = begin; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
/**
 * binary_search - searches for a value in an int list.
 * @array: array to be searched.
 * @size: number of elemnts in the array.
 * @value: value to be searched.
 *
 * Return: first index where value is located or -1
*/
int binary_search(int *array, size_t size, int value)
{
	if (array && size)
	{
		double L = 0, R = size - 1;
		int m;

		while (L <= R)
		{
			printf("Searching in array: ");
			print_array(array, L, R);
			m = (L + R) / 2;
			if (array[m] < value)
			{
				L = m + 1;
			}
			else if (array[m] > value)
			{
				R = m - 1;
			}
			else
			{
				return (m);
			}
		}
	}
	return (-1);
}
