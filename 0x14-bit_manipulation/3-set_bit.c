#include "main.h"

/**
 * set_bit - sets value of a bit at nth position
 *
 * @n: argument
 * @index: nth position
 *
 * Return: value of the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask, result;

	if (index >= *n)
		return (-1);

	mask = 1 << index;

	result = *n | mask;

	if (result > 0)
		return (1);

	return (0);
}
