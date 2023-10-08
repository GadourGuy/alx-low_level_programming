#include "main.h"

/**
 * _atoi - converts a string to an int
 * @str: string to be converted.
 *
 * Return: new int
 */

int _atoi(const char *str)
{
	int checker;
	unsigned long int respond = 0, i, firstnum;

	checker = 1;
	for (firstnum = 0; !(str[firstnum] >= 48 && str[firstnum] <= 57); firstnum++)
	{
		if (str[firstnum] == '-')
		{
			checker *= -1;
		}
	}
	for (i = firstnum; str[i] >= 48 && str[i] <= 57; i++)
	{
		respond *= 10;
		respond += (str[i] - 48);
	}
	return (checker * respond);
}
/**
 * _puts - prints a string
 * @str: string to be printed.
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * print_int - prints an int
 * @n: int to be printed
 *
 * Return: void
 */

void print_int(unsigned long int n)
{
	unsigned long int devide, i, respond;

	devide = 1;
	for (i = 0; n / devide > 9; i++, devide *= 10)
		;
	for (; devide >= 1; n %= devide, devide /= 10)
	{
		respond = n / devide;
		_putchar('0' + respond);
	}
}
/**
 * main - prints result of mult
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
