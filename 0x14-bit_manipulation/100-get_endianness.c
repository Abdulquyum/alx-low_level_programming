#include "main.h"

/**
 * get_endianness - checks for little or Big endianess
 *
 * Return: type of endianness
 */
int get_endianness(void)
{
	int var = 1;
	char *ptr = (char *)&var;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}

