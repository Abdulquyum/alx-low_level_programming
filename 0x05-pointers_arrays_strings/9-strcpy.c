#include "main.h"

/**
 * _strcpy - copy string from source to destination
 *
 * @dest: parameter for destination
 * @src: parameter for source
 *
 * Return: Returns destination.
 */
char *_strcpy(char *dest, char *src)
{
	int q;

	for (q = 0; src[q] != '\0'; q++)
	{
		dest[q] = src[q];
	}
	dest[q++] = '\0';
	return (dest);
}
