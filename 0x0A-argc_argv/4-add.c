#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds postive numbers
 * @argc: arguments number
 * @argv: arguments vector
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;
	int j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		for (j = 1; j < argc; j++)
		{
			sum += atoi(argv[j]);
		}
	}
	printf("%d\n", sum);
	
	return (0);
}
