#include <stdio.h>

/**
 * main - prints 16 base numbers
 *
 * Return: returns 0
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; ++i)
		putchar(i);
	for (i = 'a'; i <= 'f'; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}
