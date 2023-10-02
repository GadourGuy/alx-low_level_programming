#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any set
 * @s: string to be searched
 * @accept: requirements to be accepted
 *
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *find;

	find = strpbrk(s, accept);
	return (find);
}
