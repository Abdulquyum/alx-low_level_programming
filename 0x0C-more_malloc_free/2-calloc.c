#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: memory area to be filled
 * @q: char to copy
 * @n: number of times to copy b
 *
 *Return: pointer to the memory area s
 */
char *_memset(char *s, char q, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = q;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: parameter for number of elements in an array
 * @size: parameter for the size of elements in bytes
 *
 * Return: Returns pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);
	_memset(pointer, 0, nmemb * size);

	return (pointer);
}
