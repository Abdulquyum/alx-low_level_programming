#include "main.h"

/**
 * *string_toupper - changes all strings to upper case
 *
 * @x: points to upper case strings
 *
 * Return: returns the pointer.
 */
char *string_toupper(char *x)
{
	int lenght;

	lenght = 0;

	while (x[lenght] != '\0')
	{
		if (x[lenght] >= 97 && x[lenght] <= 122)
		{
			x[lenght] = x[lenght] - 32;
		}
		lenght++;
	}
	return (x);
}
