#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a bonary number to unsigned int
 *
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: converted number success else 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int q, result = 0;

	if (b == NULL)
		return (0);

	for (q = 0; b[q] != '\0'; q++)
	{
		if (b[q] != '0' && b[q] != '1')
			return (0);

		result *= 2;
		result += (b[q] - '0');

	}
	return (result);
}
