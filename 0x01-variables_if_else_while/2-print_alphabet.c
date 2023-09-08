#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: returns 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}
