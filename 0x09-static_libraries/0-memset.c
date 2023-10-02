#include "main.h"

/**
 * *_memset -  a function that fills memory with a constant byte
 * @s: a pointer to the memory area s
 * @b: the constant byte
 * @n: first n bytes of the memory
 *
 * Return: pointer s to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
