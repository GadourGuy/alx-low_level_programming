#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of printed arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, int);
		if (separator == NULL)
		{
			printf("%d", s);
		}
		else if (separator != NULL && i != n - 1)
		{
			printf("%d%s", s, separator);
		}
		else
			printf("%d\n", s);
	}
		va_end(ap);
}
