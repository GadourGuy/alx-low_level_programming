#include "main.h"

/**
 * *_strstr - a function that locates a substring.
 * @haystack: string to be searched
 * @needle: substring searched in haystack
 *
 * Return: a pointer to the beginning of substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *search;

	search = strstr(haystack, needle);
	return (search);
}
