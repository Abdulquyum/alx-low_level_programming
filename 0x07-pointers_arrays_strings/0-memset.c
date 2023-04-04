#include "main.h"

/**
 * _memset - fills memory with a costant byte
 *
 * @s: parameter for memory
 * @b: parameter for constant byte
 * @n: parameter for unsigned int
 *
 * Return: Returns a pointer to the memory s.
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
