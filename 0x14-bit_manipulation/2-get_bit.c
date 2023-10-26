#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be searched.
 * @index: index searched for.
 *
 * Return: the value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= sizeof(unsigned long int) * 8)
	{
		if ((n >> index) % 2 == 0)
			return (0);
		else
			return (1);
	}
	return (-1);
}
