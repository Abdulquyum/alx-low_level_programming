#include "main.h"

/**
 * create_array - creates array of chars with initialization
 *
 * @size: parameter for size of array
 * @c: parameter for character
 *
 * Return: returns pointer to array or NULL for failure
 */
char *create_array(unsigned int size, char c)
{
	for (c = 0; size[c] != '\0'; c++)
	{
		return (c);
	}
	if (size == 0)
	{
		return ('\0');
	}
}
