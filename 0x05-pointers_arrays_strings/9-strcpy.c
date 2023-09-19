#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @dest: destination of string copied
 * @src: string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int q;

	for (q = 0; src[q] != '\0'; q++)
	{
		dest[q] = src[q];
	}
	dest[q] = '\0';

	return (dest);
}
