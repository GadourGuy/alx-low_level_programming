#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	if (((n / 2) * (n /2)) == n)
		return (n / 2);
	else if (((n / 2) * (n /2)) > n)
		return (_sqrt_recursion(n + 1));
	else if (n <= 0)
		return (-1);
	else
		return (_sqrt_recursion(n - 1));
}
