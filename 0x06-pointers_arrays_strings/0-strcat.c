#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: parameter for string 1
 * @src: parameter for string 2
 *
 * return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int destlenght = 0;
	int q;

	while (dest[destlenght] != '\0')
	{
		destlenght++;
	}
	for (q = 0; src[q] != '\0'; q++, destlenght++)
	{
		dest[destlenght] = src[q];
	}
	dest[destlenght] = '\0';
	return (dest);
}
