#include "main.h"
#include <stddef.h>

/**
 *  _strspn - gets the lenght of a substring
 *
 * @s: string
 * @accept: byte
 *
 * Return: number of same character
 */
unsigned int _strspn(char *s, char *accept)
{
	int q, count = 0, j, flag = 0;

	if (*s == '\0' || s == NULL)
		return (0);

	for (q = 0; s[q] != '\0'; q++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[q] == accept[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			count++;
		else
			break;
	}
	return (count);
}
