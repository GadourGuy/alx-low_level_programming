#include "main.h"

/**
 * wordnum - counts number of words
 * @str: input string
 *
 * Return: words number
 */

int wordnum(char *str)
{
	int i, num = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				num++;
		}
		else if (i == 0)
			num++;
	}
	num++;
	return (num);
}

/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 *
 * Return: a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k, l, num = 0, wc = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = wordnum(str);
	if (num == 1)
		return (NULL);
	words = (char **)malloc(num * sizeof(char *));
	if (words == NULL)
		return (NULL);
	words[num - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			words[wc] = (char *)malloc(sizeof(char) * j);
			j--;
			if (words[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(words[k]);
				free(words[num - 1]);
				free(words);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				words[wc][l] = str[i + l];
			words[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (words);
}
