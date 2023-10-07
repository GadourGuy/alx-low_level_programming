#include "main.h"

/**
 * length - counts length of string
 * @str: input string
 *
 * Return: length of string
 */

unsigned int length(char *str)
{
	unsigned int i = 0;

	for (; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenates two strings by n bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes copied
 *
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size1, size2, check;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = length(s1);
	check = length(s2);
	for (size2 = 0; size2 <= n; size2++)
		;
	if (size2 >= check)
		size2 = check;
	new = malloc(size1 + n + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size1; i++)
		{
			new[i] = s1[i];
		}
		for (i = size1; i < (size1 + size2); i++)
			new[i] = s2[i - size1];
		new[i] = '\0';
		return (new);
	}
}
