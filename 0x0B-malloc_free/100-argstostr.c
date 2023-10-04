#include "main.h"

/**
 * length - ccounts length of a string
 * @str: string
 *
 * Return: length of string
 */

int length(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: input int
 * @av: arguments
 *
 * Return: concatentated string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j = 0, cmp = 0, nc = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++, nc++)
		nc += length(av[i]);
	str = malloc(sizeof(char) * nc + 1);
	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmp++)
			str[cmp] = av[i][j];
		str[cmp] = '\n';
		cmp++;
	}
	str[cmp] = '\0';
	return (str);
}
