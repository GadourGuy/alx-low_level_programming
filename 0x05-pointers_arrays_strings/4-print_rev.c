#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse
 * @s: string printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length;
	int i;

	length = strlen(s);
	for (i = length - 1; i >= 0; --i)
	{
		_putchar(s[i]);
	}	
	_putchar('\n');

}
