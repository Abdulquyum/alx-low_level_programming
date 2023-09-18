#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: parameter for string
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int q, lenght = 0;

	for (q = 0; s[q] != '\0'; q++)
	{
		lenght++;
	}

	return (lenght);
}
