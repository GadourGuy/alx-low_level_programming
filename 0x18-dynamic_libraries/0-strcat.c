#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
