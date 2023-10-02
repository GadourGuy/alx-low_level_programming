#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 *  _isalpha - checks alpha letters
 *  @c: int parameter
 *
 *  Return: returns 0 or 1
 */
int  _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
