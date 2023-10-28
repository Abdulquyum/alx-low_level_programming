#include "main.h"
/**
 * flip_bits - expose the number of bits to be flipped to get to another
 *
 * @n: parameter for arg one
 * @m: parameter for arg two
 *
 * Return: number of iteration
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int long result, ret;

	result = n ^ m;

	ret = get_count(result);

	return (ret);
}
/**
 * get_count - get count of its parameter
 *
 * @i: argument passed
 *
 * Return: number of iteration
 */
unsigned int get_count(unsigned int i)
{
	unsigned int count;

	count = 0;
	while (i != 0)
	{
		i = i & (i - 1);
		count++;
	}
	return (count);
}
