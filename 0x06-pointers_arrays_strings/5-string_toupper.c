#include "main.h"
#include <stdlib.h>

/**
 * string_toupper - a function that changes letters of a string to uppercase
 * @str: string to be changed
 * Return: string in upper case
 */

char *string_toupper(char *str)
{
	static int i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
