#include "main.h"

/**
 * checkPrime - checks for a prime number
 * @start: search begining
 * @end: search end
 *
 * Return: return 1 if succsesfull 0 if not
 */

int checkPrime(int start, int end)
{
	if (end % start != 0 && end != start)
		return (checkPrime(start + 1, end));
	else if (end % start == 0 && end == start)
		return (1);
	else
		return (0);
}

/**
 * is_prime_number - returns 1 if prime 0 if not
 * @n: input number
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (checkPrime(2, n));
}
