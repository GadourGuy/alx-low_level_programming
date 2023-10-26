#include "main.h"

/**
 * flip_bits - returns the number of bits to equal
 * @n: first number
 * @m: second number
 *
 * Return: number of bits required
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int v = m ^ n;

	while (v != 0)
	{
		if ((v & 1) != 0)
			i++;
		v = v >> 1;
	}
	return (i);
}
