#include "main.h"

/**
 * puts_half - function that prints half of the string
 * @str: string to be printed in half
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length, i;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		if (length % 2 == 0 && i >= (length / 2))
			_putchar(str[i]);
		else if (length % 2 != 0 && i > ((length - 1) / 2))
			_putchar(str[i]);
	}
	_putchar('\n');
}
