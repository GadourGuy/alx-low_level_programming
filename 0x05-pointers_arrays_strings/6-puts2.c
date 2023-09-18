#include "main.h"

/**
 * puts2 - a function that prints every other character of a string.
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int length, i;

	length = strlen(str);
	for (i = 0; i < length; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
