#include <stdio.h>

void first() __attribute__((constructor));

/**
 * first - prints before main.
 *
 */

void first()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

