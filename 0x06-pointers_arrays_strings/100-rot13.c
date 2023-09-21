#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: encoded string
 *
 * Return:encoded string
 */

char *rot13(char *s)
{
	int i;
	char *ptr = s;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char Rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = Rot13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
