#include "main.h"

/**
 * squireFinder - finds a square root
 * @start: start of search
 * @end: end of search
 *
 * Return: square root
 */

int squireFinder(int start, int end)
{
	if (start * start == end)
		return (start);
	else if (start * start < end)
		return (squireFinder(start + 1, end));
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (squireFinder(1, n));
}
