#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;
	int mult = 1;

	if (argc == 3)
	{
		for (i = 1; i <  argc; i++)
			mult *= atoi(argv[i]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
