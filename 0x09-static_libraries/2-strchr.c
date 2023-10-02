#include "main.h"

/**
 * *_strchr - a function that locates a character in a string.
 * @s: memory location to be searched
 * @c: char to be found
 * Return: pointer to s if c is found, NULL if not
 */

char *_strchr(char *s, char c)
{
	char *find;

	find = strchr(s, c);
	return (find);
}
