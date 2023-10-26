#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int last_digit;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	last_digit = n & 1;
	_putchar(last_digit + '0');
}
