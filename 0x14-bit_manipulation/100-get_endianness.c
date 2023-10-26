#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int num = 0x01;
	char *bytes;

	bytes = (char *)&num;

	if (bytes[0] == 0x01)
		return (1);
	return (0);
}
