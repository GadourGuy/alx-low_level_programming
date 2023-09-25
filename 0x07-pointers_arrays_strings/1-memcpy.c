#include "main.h"

/**
 * *_memcpy - a function that copies memory area.
 * @dest: pointer to memory area dest
 * @src: pointer to memory area src
 * @n: number of copied bytes
 *
 * Return: pointer to memory dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
