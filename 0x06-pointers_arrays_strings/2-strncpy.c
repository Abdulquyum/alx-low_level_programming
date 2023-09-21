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

	for (q = 0; src[q] != '\0'; q++)
	{
		if (n > 0)
		{
			dest[q] = src[q];
			n--;
		}
	}

	return (dest);
}
