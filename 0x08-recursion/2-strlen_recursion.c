#include "main.h"

/**
 * _strlen_recursion - lenght of string
 *
 * @s: parameter for string
 *
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
