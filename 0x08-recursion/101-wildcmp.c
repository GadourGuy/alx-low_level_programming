#include "main.h"

/**
 * move_from_star - moves to the char after *
 * @s2: pointer to s2
 *
 * Return: s2 without star
 */

char *move_from_star(char *s2)
{
	if (*s2 == '*')
		return (move_from_star(s2 + 1));
	else
		return (s2);
}
/**
 * checkWildcmp - compares 2 strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: 1 if succsefull 0 if not
 */

int checkWildcmp(char *s1, char *s2)
{
	int result = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		result += wildcmp(s1 + 1, s2 + 1);
	result += checkWildcmp(s1 + 1, s2);
	return (result);
}

/**
 * wildcmp - compares two strings and returns 1 or 0
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_from_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_from_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += checkWildcmp(s1, s2);
		return (!!ret);
	}
	return (0);
}
