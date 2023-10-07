#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: array element
 * @size: byte size
 *
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

/**
 * _memset - fill memory with a constant byte
 *
 * @s: string
 * @b: constant byte
 * @n: size
 *
 * Return: pointer to memory
 */
char *_memset(char *s, int b, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		s[q] = b;
	}

	return (s);
}
