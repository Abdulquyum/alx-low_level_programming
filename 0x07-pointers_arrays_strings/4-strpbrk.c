#include "main.h"

/**
 * _strpbrk - searces a string for any of a set of bytes
 *
 * @s: the string searched
 * @accept: sets of bytes to be searched for
 *
 * Return: Returns a pointer to the matched byte or null.
 */
char *_strpbrk(char *s, char *accept)
{
	int count;

		while (*s)
		{
			for (count = 0; accept[count]; count++)
			{
				if (*s == accept[count])
					return (s);
			}
			s++;
		}
		return ('\0');
}
