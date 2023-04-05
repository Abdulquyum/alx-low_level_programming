#include "main.h"

/**
 * _strlen_recursion - showcasw lenght of a string
 *
 * @s: parameter to string
 *
 * Return: Returns lenght of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
