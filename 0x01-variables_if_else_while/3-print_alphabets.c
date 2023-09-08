#include <stdio.h>

/**
 * main - prints alphabet in lower-upper cases
 *
 * Return: returns 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
		putchar(i);
	for (i = 'A'; i <= 'Z'; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}
