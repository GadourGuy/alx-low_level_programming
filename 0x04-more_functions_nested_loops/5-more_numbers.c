#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; ++j)
		{
			if (j < 10)
			{
				_putchar(j + 48);
			}
			else
			{
				_putchar(48 + (j / 10));
				_putchar(48 + (j % 10));

			}

		}
		_putchar('\n');
	}
}
