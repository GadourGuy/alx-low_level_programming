#include <stdio.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: int parameter
 *
 * Return: returns n
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;
	_putchar('0' + lastdigit);
	return (lastdigit);
}
