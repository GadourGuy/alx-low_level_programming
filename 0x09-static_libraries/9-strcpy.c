#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: the distination of copying
 * @src: pointer to a string
 *
 * Return: returns pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
