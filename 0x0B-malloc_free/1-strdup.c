#include "main.h"

/**
 * _strdup - returns a copy of given string using malloc
 * @str: given string
 *
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *cpy;
	unsigned int i;

	if (str != NULL)
	{
		cpy = malloc(sizeof(str));
		if (cpy != NULL)
		{
			for (i = 0; i < sizeof(str); i++)
				cpy[i] = str[i];
		}
		else
			return (NULL);
	}
	else
	{
		return (NULL);
	}
	return (cpy);
}
