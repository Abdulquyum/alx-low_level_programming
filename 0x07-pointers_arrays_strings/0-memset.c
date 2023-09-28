#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: string
 * @b: byte to copy
 * @n: byte of the memory area
 *
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		s[q] = b;
	}
	return (s);
}
