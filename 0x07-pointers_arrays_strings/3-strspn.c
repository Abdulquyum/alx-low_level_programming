#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 *
 * @s: parameter for string to search in
 * @accept: parameter 2
 *
 * Return: Returns lenght of the prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s[count] == accept[count])
			{
				bytes++;
				break;
			}
			else if (accept[count + 1] == '\0')
				return (bytes);
			else
				return ('\0');
		}
		s++;
	}
}
