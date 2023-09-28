#include "main.h"

/**
 * checkPalindrome - check string if palindrome or not'
 * @i: starting point
 * @s: given string
 *
 * Return: 1 if succesful 0 if not
 */
int checkPalindrome(size_t i, char *s)
{
	if (s[i] == s[strlen(s) - 1 - i] && i != strlen(s) / 2)
		return (checkPalindrome(i + 1, s));
	else if (s[i] == s[strlen(s) - 1 - i] && i == strlen(s) / 2)
		return (1);
	else
		return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to string
 *
 * Return: 1 if succesfull 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == ' ')
	return (1);
	else
		return (checkPalindrome(0, s));
}
