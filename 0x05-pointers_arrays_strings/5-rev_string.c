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

	for (length = 0; s[length] != '\0'; length++)
		;
	for (i = 0; i < length / 2; ++i)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
