#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int length;
	int j;

	length = strlen(s);
	j = length;
	for (i = 0; i < length; ++i)
	{
		s[i] = s[j];
		j--;
	}
}
