#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: string to be printed between the strings.
 * @n: number of printed strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char *);
			if (separator == NULL)
				printf("%s", str ? str : "(nil)");
			else if (separator != NULL && i != n - 1)
				printf("%s%s", str ? str : "(nil)", separator);
			else
				printf("%s\n", str ? str : "(nil)");
		}
		va_end(ap);
	}
}
