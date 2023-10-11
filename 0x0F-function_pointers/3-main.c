#include "3-calc.h"

/**
 * main - performs simple operations.
 * @argc: number of arguments.
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (((*argv[2] == '%' || *argv[2] == '/') && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2]);
	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = (get_op_func(argv[2]))(a, b);
	printf("%d\n", c);
	return (0);

}
