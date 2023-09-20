#include "main.h"

/**
 * _strncat - concatenates n string
 *
 * @dest: parameter for destination
 * @src: parameter for source
 * @n: parameter for nth string
 *
 * Return: conactenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int q, length = 0;

	for (q = 0; dest[q] != '\0'; q++)
	{
		length++;
	}

	for (q = 1; src[q] <= n; q++)
	{
		if (n <= 0)
			break;
		dest[length] = src[q];
		length++;
	}
	dest[length] = '\0';

	return (dest);
}
