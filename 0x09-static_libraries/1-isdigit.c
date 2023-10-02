#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: the value that gets checked
 *
 * Return: returns 1 or 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
