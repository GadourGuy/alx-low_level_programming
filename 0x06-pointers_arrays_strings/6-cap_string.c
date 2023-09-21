#include "main.h"

/**
 * isspecial - checks if the char is special char
 * @ch: char
 *
 * Return: 0 or 1
 */

int isspecial(char ch)
{
	int i;
	char special[] = " \t\n,.!?\"(){}";

	for (i =0; i < 12; i++)
	{
		if (ch == special[i])
			return (1);
	}
	return (0);
}

/**
 * *cap_string -  function that capitalizes all words of a string
 * @str: input string
 *
 * Return: string with captilazed words
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int foundspecial = 1;

	while (*str)
	{
		if (isspecial(*str))
			foundspecial = 1;
		else if (islower(*str) && foundspecial)
		{
			*str -= 32;
			foundspecial = 0;
		}
		else
			foundspecial = 0;
		str++;
	}
	return (ptr);
}
