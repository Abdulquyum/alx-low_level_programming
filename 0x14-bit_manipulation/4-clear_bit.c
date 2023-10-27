#include "main.h"

/**
 * clear_bit - sets value of a bit at nth position to 0
 *
 * @n: argument
 * @index: nth position
 *
 * Return: value of the bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= *n)
		return (-1);

	mask = 1 << index;

	*n &= ~mask;

		return (1);
}
