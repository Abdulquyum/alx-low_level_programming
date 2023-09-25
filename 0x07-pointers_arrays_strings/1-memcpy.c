#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: byte
 *
 * Return: 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		dest[q]= src[q];
	}
	return (dest);
}
