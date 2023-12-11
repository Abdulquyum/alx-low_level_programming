#include "main.h"

/**
 * _strlen - prints lenght ofstring
 *
 * @s: parameter for string
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}
