#include "main.h"

/**
 * *cap_string - a function that capitalizes words of a string
 * @str: string to be capitalized
 *
 * Return: pointer to the string str
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '.')
		{
			++i;
			while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '.')
				++i;
			if (isalpha(str[i]))
				str[i] = toupper(str[i]);
		}
		i++;
	}
	return (str);
}
