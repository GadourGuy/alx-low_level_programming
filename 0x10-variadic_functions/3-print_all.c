#include "variadic_functions.h"

/**
 * print_char - prints char.
 * @ap: char to be printed
 *
 * Return: void
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints int.
 * @ap: int to be printed
 *
 * Return: void
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints float.
 * @ap: float to be printed
 *
 * Return: void
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_str - prints string.
 * @ap: string to be printed
 *
 * Return: void
 */

void print_str(va_list ap)
{
	char *str = va_arg(ap, char *);

	printf("%s", str ? str : "(nil)");
}

/**
 * print_all - prints anything
 * @format: format for printed value
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	int j;
	search_t printing[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (printing[j].search)
		{
			if (format[i] == printing[j].search[0] && format[i + 1])
			{
				printing[j].f(ap);
				printf(", ");
			}
			else if (format[i] == printing[j].search[0])
			{
				printing[j].f(ap);
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
