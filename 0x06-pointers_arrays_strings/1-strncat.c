#include "main.h"

/**
 * *_strncat - concatenates two strings
 *
 * @dest: destination parameter
 * @src: source parameter
 * @n: parameter
 * Return: Returns the destination parameter
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlenght = 0;
	int q;

	while (dest[destlenght] != '\0')
	{
		destlenght++;
	}
	for (q = 0; q < n && src[q] != '\0'; q++, destlenght++)
	{
		dest[destlenght] = src[q];
	}
	dest[destlenght] = '\0';
	return (dest);
}
