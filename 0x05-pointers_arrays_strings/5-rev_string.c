#include "main.h"

/**
 * void rev_string - Reverse strings
 *
 * @s: parameter for string
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int q, lenght = 0;
	char save;

	for (q = 0; s[q] != '\0'; q++)
	{
		lenght++;
	}

	for (q = 0; q <= (lenght / 2); q++)
	{
		save = s[q];
		s[q] = s[lenght - 1 - q];
		s[lenght - 1- q] = save;
	}
}
