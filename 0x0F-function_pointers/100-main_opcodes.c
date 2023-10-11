#include "function_pointers.h"

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: o
 */

int main(int argc, char *argv[])
{
	int i;
	char *b = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i)
	{
		printf("%02hhx%s", *b++, i ? " " : "\n");
		i--;
	}
	return (0);
}
