#include "main.h"

/**
 * *_strncat - a function that concatenates two strings up to n
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: number of appended strings
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
