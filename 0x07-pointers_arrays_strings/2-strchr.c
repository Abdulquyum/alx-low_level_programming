#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: parameter for string
 * @c: character to be searched for
 *
 * return: characters seen
 */
char *_strchr(char *s, char c)
{
	int q;

	for (q = 0; s[q] != '\0'; q++)
	{

		if (s[q] == c)
			return (&(s[q]));
	}
	return (0);
}
