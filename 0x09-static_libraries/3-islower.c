#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - checks lower letter
 *@c: parameter of type int
 * Return: returns 0
 */
int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
