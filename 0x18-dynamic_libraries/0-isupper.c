#include "main.h"
#include <ctype.h>

/**
 * _isupper - check for upper char
 * @c: int for function
 *
 * Return: returns 0 or 1
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);

}
