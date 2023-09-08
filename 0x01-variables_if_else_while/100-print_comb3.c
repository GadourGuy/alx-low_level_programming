#include <stdio.h>

/**
 * main - prints possible digits of 2 numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (j != i && j > i)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (j != 9 || i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
