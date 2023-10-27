#include "main.h"

/**
 * get_bit - gets value of a bit at nth position
 *
 * @n: argument
 * @index: nth position
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask, result;

	if (index >= n)
		return (-1);

	mask = 1 << index;

	result = n & mask;

	if (result > 0)
		return (1);
	else
		return (0);
}
