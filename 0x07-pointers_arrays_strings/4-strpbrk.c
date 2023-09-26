#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string 
 * @accept: match string
 *
 * Return: pointer to s that matches accept
 */
char *_strpbrk(char *s, char *accept)
{
	int q;

	while(*s != '\0')
	{
		for (q = 0; accept[q] != '\0'; q++)
		{

			if (*s == accept[q])
				return (s);
		}
		s++;
	}
	return (NULL);
}
