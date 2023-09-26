#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a string
 *
 * @haystack: strings to be searched
 * @needle: string to search
 *
 * return: pointer to the beginning of located substring, else 0
 */
char *_strstr(char *haystack, char *needle)
{       
        int q, j;

	if (needle == NULL)
		return (haystack);

	for (q = 0; haystack[q] != '\0'; q++)
	{
		if (haystack[q] == needle[0])
		{
			for (j = 0; needle[j]!= '\0'; j++)
			{
				if (haystack[q + j] != needle[j])
					break;
			}
		if (!(needle[j]))
			return (&(haystack[q]));
		}
	}
	return (NULL);
}
