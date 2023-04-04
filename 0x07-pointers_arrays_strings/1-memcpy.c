#include "main.h"

/**
 * *_memcpy - copies memory area from source to destination.
 *
 * @dest: parameter for destination
 * @src: parameter for source
 * @n: parameter for bytes
 *
 * Return: Returns destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
	{
		dest[y] = src[y];
	}
	return (dest);
}
