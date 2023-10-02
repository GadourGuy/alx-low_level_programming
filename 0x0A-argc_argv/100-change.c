#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  prints the minimum number of coins to make change
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int total, i, sum = 0;
		int change[] = {25, 10, 5, 2, 1};

		total = atoi(argv[1]);
		for (i = 0; i < 5; i++)
		{
			if (total >= change[i])
			{
				sum += total / change[i];
				total %= change[i];
				if (total % change[i] == 0)
					break;
			}
		}
	
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
