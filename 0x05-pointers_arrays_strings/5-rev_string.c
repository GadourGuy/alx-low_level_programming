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
	char temp;

	length = strlen(s);
	for (i = 0; i <= length / 2; ++i)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
