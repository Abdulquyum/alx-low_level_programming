#include "main.h"

/**
 *  _strspn - gets the lenght of a substring
 *
 *  @s: string
 * @accept: byte
 */
unsigned int _strspn(char *s, char *accept)
{
	int q, count = 0;
	int j, flag = 0;


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
