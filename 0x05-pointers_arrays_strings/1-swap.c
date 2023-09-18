#include "main.h"

/**
 * swap_int - a function that swaps 2 pointers
 * @a: first pointer
 * @b: second pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
