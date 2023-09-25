#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: array that contains 8 bits
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j, count;
	char *b = "rkbqkbkr";

	count = 0;
	strcpy(a[8], b);
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (i == 0)
				_putchar(b[j]);
			else if (i == 1)
				_putchar('p');
			else if (i == 6)
				_putchar('P');
			else if (i == 7)
				_putchar(b[j] - 32);
			else
				_putchar(' ');
		}
		count++;
		_putchar('\n');
	}

}
