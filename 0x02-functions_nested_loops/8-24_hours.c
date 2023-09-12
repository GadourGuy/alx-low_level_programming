#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints time
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; ++i)
	{
		_putchar('0' + i % 10);
		_putchar('0' + i / 10);
		_putchar(':');
		for (j = 0; j < 60; ++j)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}
}
