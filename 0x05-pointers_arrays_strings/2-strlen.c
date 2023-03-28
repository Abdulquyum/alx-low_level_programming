#include "main.h"

/**
 * _strlen - prints the lenghts of a string
 *
 * @s: parameter passed
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int q;
	int count = 0;

	for (q = 0; s[q] != '\0'; q++)
	{
	count++;
	}
	return (count);
}
