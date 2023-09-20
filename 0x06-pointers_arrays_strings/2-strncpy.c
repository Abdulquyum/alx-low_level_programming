#include "main.h"

/**
 * _strncpy - copy nth size of string
 * @dest: parameter for destination
 * @src: paramter for source
 * @n: nth size
 *
 * Return: pointer destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int q;

	for (q = 0; src[q] < n; q++)
	{
		if (n <= 0)
			break;
		dest[q] = src[q];
	}
	dest[q] = '\0';

	return (dest);
}
