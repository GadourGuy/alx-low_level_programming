#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: pointer to first string
 * @src: pointer to second string "copied"
 * @n: number of copied chars
 *
 * Return: pointer to first string 'dest'
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
