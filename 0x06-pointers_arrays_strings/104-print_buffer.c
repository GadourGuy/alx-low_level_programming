#include "main.h"
#include <stdio.h>

/**
 * isprintableASCII - determns if n is printable in ASCII
 * @m: integer
 *
 * Return: 1 if true 0 if false
 */
int isprintableASCII(int m)
{
	return (m >= 32 && m <= 126);
}

/**
 * printHexes - prints hex values for char b
 * @b: string to print
 * @start: strting place
 * @end: ending place
 */

void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - function to print ASCII values
 * @s: string to print
 * @start: starting postion
 * @end: ending postion
 */

void printASCII(char *s, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(s + i + start);
		if (!isprintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - a function that prints a buffer.
 * @b: string
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start) < 10 ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
