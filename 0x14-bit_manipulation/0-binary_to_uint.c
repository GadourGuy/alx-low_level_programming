#include "main.h"
#include <math.h>

/**
 * power - power of number
 * @base: base of number
 * @n: power
 *
 * Return: power of number
 */

int power(int base, int n)
{
	int i, result = 1;

	for (i = 0; i < n; i++)
		result *= base;
	return (result);
}
/**
 * check_binary - checks if the number is binary
 * @b: number to be checked
 *
 * Return: 1 if true 0 if false
 */

int check_binary(const char *b)
{
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (1);
}

/**
 * binary_to_uint - converts a binary number to an int
 * @b: number to be converted
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0;
	int len, i;

	if (check_binary(b))
	{
		len = strlen(b);
		for (i = 0; i <= len; i++)
		{
			if (b[i] == '1')
				j += power(2, (len - i - 1));
		}
		return (j);
	}
	return (0);
}
