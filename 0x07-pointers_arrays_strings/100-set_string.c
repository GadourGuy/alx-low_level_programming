#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: pointer that has a value of a char
 * @to: requierd value to contain
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
