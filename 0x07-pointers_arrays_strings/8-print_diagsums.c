#include "main.h"

/**
 * print_diagsums - a function that prints the sum of two diagonals
 * @a: array
 * @size: size of square array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1, sum2;
	int k = size;
	int s[k][k] = *a;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += s[i][j];
			else if (i + j == 4)
				sum2 += s[i][j];

		}
	}
	printf("%d, %d\n", sum1, sum2);

}
