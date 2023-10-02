#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string to be searched
 * @accept: required chars to be matched
 *
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
