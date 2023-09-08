#include <stdio.h>

/**
 * main - prints possible combinations of two two digits
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			for (k = 0; k <= 9; ++k)
			{
				for (l = 0; l <= 9; ++l)
				{
					if (l > j && k >= i)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(' ');
						putchar('0' + k);
						putchar('0' + l);
						if (i != 9 || j != 8 || k != 9 || l != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
