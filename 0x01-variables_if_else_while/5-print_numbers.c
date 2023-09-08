#include <stdio.h>

/**
 * main - prints numbers from 0 to 10
 *
 * Return: returns 0
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}
