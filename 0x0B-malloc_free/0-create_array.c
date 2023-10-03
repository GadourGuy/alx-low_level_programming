#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: size of array
 * @c: initalised char.
 *
 * Return: pointer to the first char.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size > 0)
	{
		str = malloc(size);
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
	else
	{
		return (NULL);
	}
	return (str);
}
