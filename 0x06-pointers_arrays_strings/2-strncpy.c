#include "main.h"

/**
 * *_strncpy - copies a string
 *
 * @dest: destination parameter
 * @src: source parameter
 * @n: int parameter
 * Return: Returns destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int byte_count;

	for (byte_count = 0; byte_count < n && src[byte_count] != '\0'; byte_count++)
		dest[byte_count] = src[byte_count];
	for (; byte_count < n; byte_count++)
		dest[byte_count] = '\0';

	return (dest);
}
