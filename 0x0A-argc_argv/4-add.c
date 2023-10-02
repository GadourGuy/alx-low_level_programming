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
	char *str;
	int sum = 0;

	while (--argc)
	{
		for (str = argv[argc]; *str; str++)
		{
			if (*str < '0' || *str > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
