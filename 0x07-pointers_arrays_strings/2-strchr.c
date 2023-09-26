#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: parameter for string
 * @c: character to be searched for
 *
 * Return: characters seen
 */
char *_strchr(char *s, char c)
{
	int q;

	if (*s == '\0')
		return (NULL);

	for (q = 0; s[q] != '\0'; q++)
	{

		if (s[q] == c)
			return (&(s[q]));
	}
	if (c == '\0')
		return (&(s[q]));

	return (NULL);
}
