#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to concatentated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	char *new;

	if (s1 != NULL && s2 != NULL)
	{
		new = malloc(strlen(s1) + strlen(s2) + 1);
		for (i = 0; i < strlen(s1); i++)
			new[i] = s1[i];
		for (i = strlen(s1); i < (strlen(s1) + strlen(s2)); i++)
			new[i] = s2[i - strlen(s1)];
	}
	else if (s1 != NULL && s2 == NULL)
	{
		new = malloc(strlen(s1) + 1);
		for (i = 0; i < strlen(s1); i++)
			new[i] = s1[i];
	}
	else if (s1 == NULL && s2 != NULL)
	{
		new = malloc(strlen(s2) + 1);
		for (i = 0; i < strlen(s2); i++)
			new[i] = s2[i];
	}
	else
		return (NULL);
	return (new);
}
