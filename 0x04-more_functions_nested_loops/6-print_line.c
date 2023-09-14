#include "main.h"

/**
 * print_line - function that prints a line in terminal
 * @n: number of lines given
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
