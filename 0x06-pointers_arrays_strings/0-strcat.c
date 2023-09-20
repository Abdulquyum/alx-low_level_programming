#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: parametr for destination
 * @src: parametr for source string
 *
 * Return: concatenated string in dest
 */
char *_strcat(char *dest, char *src)
{
	int q, length = 0;

	for (q = 0; dest[q] != '\0'; q++)
	{
		length++;
	}

	for (q = 0; src[q] != '\0'; q++)
	{
		dest[length] = src[q];
		length++;
	}
	dest[length] = '\0';

	return (dest);
}
