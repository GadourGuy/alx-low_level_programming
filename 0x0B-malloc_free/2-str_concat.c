#include "main.h"

/**
 * length - counts length for string
 * @str: pointer to string
 *
 * Return: length of string
 */

unsigned int length(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to concatentated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, size1, size2;
	char *new;

	size1 = length(s1);
	size2 = length(s2);
	new = malloc(size1 + size2);
	if (new != NULL)
	{
		for (i = 0; i < size1; i++)
			new[i] = s1[i];
		for (i = size1; i < (size1 + size2); i++)
			new[i] = s2[i - size1];
	}
	else
		return (NULL);
	return (new);
}
