#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: parameter for string to e searched
 * @needle: parameter for substring to be located
 *
 * Return: a pointer to the beginning is substring located else Null.
 */
char *_strstr(char *haystack, char *needle)
{
	int count;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		count = 0;

		if (haystack[count] == needle[count])
		{
			do {
				if (needle[count + 1] == '\0')
					return (haystack);
				count++;
			} while (haystack[count] == needle[count]);
		}
		haystack++;
	}
	return ('\0');
}
