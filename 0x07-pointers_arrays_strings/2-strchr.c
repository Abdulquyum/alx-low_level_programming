#include "main.h"

/**
* *_strchr - searches and locate a character in a string of characters
*
* @s: parameter for searching in string
* @c: parameter for searching character
*
* Return: Returns character if found else returns Null.
*/
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] >= '\0'; count++)
	{
		if (s[count] == c)
		{
			return (s + count);
		}
	}
	return ('\0');
}
