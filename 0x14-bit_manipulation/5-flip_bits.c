#include "main.h"

/**
 * flip_bits - numbers of bits to be flip[ed to get to another
 *
 * @n: parameter to be flipped
 * @m: second parameter
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res, ret;

	res = n ^ m;

	ret = get_count(res);

	return (ret);
}

unsigned int get_count(unsigned int i)
{
	unsigned int count;

	count = 0;
	while (count != 0)
	{
		i = i & (i - 1);
		count++;
	}
	return (count);
}
